from django.contrib import messages
from django.shortcuts import render, redirect
from django.http import HttpResponse
from .models import product, Orders,Contact,OrderUpdate
from django.contrib.auth.models import User
from django.contrib.auth import authenticate, login, logout
from math import ceil
import json
# Create your views here.
def index(request):
    # products = product.objects.all()
    # n=len(products)
    # nSlides=n//4 + ceil((n/4)-(n//4))
   # params={'no of slides':nSlides,'range':range(1,nSlides),'product':products}
   #  allProds =[[products, range(1, nSlides), nSlides],
   #             [products, range(1, nSlides), nSlides]]


    allProds=[]
    catProds = product.objects.values('category','id')
    cats = {item['category'] for item in catProds}
    for  cat in cats:
        prod=product.objects.filter(category=cat)
        n = len(prod)
        nSlides = n // 4 + ceil((n / 4) - (n // 4))
        allProds.append([prod, range(1,nSlides), nSlides])

    params = {'allProds': allProds}
    return render(request,'shop/index.html',params)

def searchMatch(query, item):
    '''return True only if query matches item'''
    if query in item.product_name.lower() or query in item.category.lower():
        return True
    else:
        return False

def search(request):
    query = request.GET.get('search')
    allProds = []
    catProds = product.objects.values('category', 'id')
    cats = {item['category'] for item in catProds}
    for cat in cats:
        prodtemp = product.objects.filter(category=cat)
        prod = [item for item in prodtemp if searchMatch(query, item)]
        n = len(prod)
        nSlides = n // 4 + ceil((n / 4) - (n // 4))
        if len(prod) != 0:
            allProds.append([prod, range(1, nSlides), nSlides])

    params = {'allProds': allProds, "msg":""}
    if len(allProds) == 0 or len(query)<4:
        params = {"msg":"Please make sure to enter relevant search query"}
    return render(request, 'shop/search.html', params)

def basic(request):
    return render(request,'shop/basic.html')

def about(request):
    return render(request,'shop/about.html')

def contact(request):
    if request.method=="POST":
        name = request.POST.get('inputName', '')
        email = request.POST.get('inputEmail', '')
        phone = request.POST.get('inputPhone', '')
        desc = request.POST.get('desc', '')
        contact = Contact(name=name,email=email,phone=phone,desc=desc)

        if len(phone) < 10 or len(desc) < 50 or len(email) < 5:
            messages.error(request,'INVALID CREDENTIALS, PLEASE TRY AGAIN')
        else:
            messages.success(request,'SUCCESSFULLY PLACED')
            contact.save()
    return render(request,'shop/contact.html')

def tracker(request):
    if request.method=="POST":
        orderid = request.POST.get('orderID', '')
        email = request.POST.get('inputEmail', '')
        try:
            order = Orders.objects.filter(order_id=orderid,email=email)
            if len(order)>0:
                update = OrderUpdate.objects.filter(order_id=orderid)
                updates =[]
                for item in update:
                    updates.append({'text':item.update_desc, 'time':item.timestamp})
                    response = json.dumps({"status":"success", "updates": updates, "itemsJson": order[0].items_json}, default=str)
                    #If you have a Python object, you can convert it into a JSON string by using the json.dumps() method.
                return HttpResponse(response)
            else:
                return HttpResponse('{"status":"noitem"}')
        except Exception as e:
            return HttpResponse('{"status":"error"}')


    return render(request,'shop/tracker.html')

def productview(request,myid):
    # fetch the product using the id
    products = product.objects.filter(id=myid)
    return render(request,'shop/productview.html',{'products':products[0]})

def checkout(request):
    if request.method == "POST":
        # inputName is  ID in from
        items_json = request.POST.get('itemsJson', '')
        name = request.POST.get('inputName', '')
        email = request.POST.get('inputEmail', '')
        address = request.POST.get('inputAddress', '')
        phone = request.POST.get('inputPhone', '')
        city = request.POST.get('inputCity', '')
        state = request.POST.get('inputState', '')
        zip_code = request.POST.get('inputZip', '')
        order = Orders(items_json=items_json, name=name, email=email, address=address, phone=phone, city=city, state=state, zip_code=zip_code)
        order.save()
        update = OrderUpdate(order_id=order.order_id,update_desc="The order has been placed")
        update.save()
        id=order.order_id
        thanks = True
        return render(request, 'shop/thanks.html', {'thanks':thanks, 'id':id, 'items_json':items_json})
    return render(request,'shop/checkout.html')

def thanks(request):
    return render(request, 'shop/thanks.html')

def handleSignup(request):
    if request.method == 'POST':
        #Get the post parameters
        username= request.POST['username']
        fname= request.POST['fname']
        lname= request.POST['lname']
        email= request.POST['email']
        pass1= request.POST['pass1']
        pass2= request.POST['pass2']

        #Check for errorneous inputs
        # username should be under 13 characters
        if len(username) > 13:
            messages.error(request,'USERNAME MUST BE UNDER 10 CHARACTERS')
            return redirect('shophome')
        # username should be alphanumeric
        if not username.isalnum():
            messages.error(request,'USERNAME SHOULD ONLY CONTAIN LETTERS AND NUMBERS')
            return redirect('shophome')
        # passwords should match
        if pass1 != pass2 :
            messages.error(request,'PASSWORDS DO NOT MATCH')
            return redirect('shophome')

        #Create the user
        myUser = User.objects.create_user(username,email,pass2)
        myUser.first_name = fname
        myUser.last_name = lname
        myUser.save()
        messages.success(request,'YOUR ACCOUNT HAS BEEN SUCCESSFULLY CREATED')
        return redirect('shophome')
    else:
        return HttpResponse('404 - NOT FOUND')

def handleLogin(request):
    if request.method == 'POST':
        #Get the post parameters
        loginUsername= request.POST['loginUsername']
        loginPass= request.POST['loginPass']
        user = authenticate(username=loginUsername, password=loginPass)
        if user is not None:
            login(request,user)
            messages.success(request,'SUCCESSFULLY LOGED IN')
            return redirect('shophome')
        else:
            messages.error(request,'INVALID CREDENTIALS, PLEASE TRY AGAIN')
            return redirect('shophome')

    return HttpResponse('404 - NOT FOUND')

def handleLogout(request):
    logout(request)
    messages.success(request, 'SUCCESSFULLY LOGED OUT')
    return redirect('shophome')

