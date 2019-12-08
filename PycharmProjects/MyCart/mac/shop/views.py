from django.shortcuts import render
from django.http import HttpResponse
from .models import product
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
    return render(request,'shop/contact.html')

def tracker(request):
    return render(request,'shop/tracker.html')

def search(request):
    return render(request,'shop/search.html')

def productview(request):
    return render(request,'shop/productview.html')

def checkout(request):
    return render(request,'shop/checkout.html')
