from django.contrib import admin
from .models import product, Orders

admin.site.site_header = 'EBuyZone'
admin.site.register(product)
admin.site.register(Orders)
