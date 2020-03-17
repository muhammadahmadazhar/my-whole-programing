from django.shortcuts import render
from django.http import HttpResponse
from .models import product, Orders,Contact
from math import ceil
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
        contact.save()
    return render(request,'shop/contact.html')

def tracker(request):
    return render(request,'shop/tracker.html')

def search(request):
    return render(request,'shop/search.html')

def productview(request,id):
    # fetch the product using the id
    return render(request,'shop/productview.html')

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
        id=order.order_id
        thanks = True
        return render(request, 'shop/thanks.html', {'thanks':thanks, 'id':id, 'items_json':items_json})
    return render(request,'shop/checkout.html')

def thanks(request):
    return render(request, 'shop/thanks.html')