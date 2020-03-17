from django.contrib import admin
from .models import product, Orders,Contact

admin.site.site_header = 'EBuyZone'
admin.site.register(product)
admin.site.register(Orders)
admin.site.register(Contact)
