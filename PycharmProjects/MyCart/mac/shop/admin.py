from django.contrib import admin
from .models import product

admin.site.site_header = 'EBuyZone'
admin.site.register(product)
