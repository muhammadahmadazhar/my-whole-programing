from django.contrib import admin
from .models import product, Orders,Contact,OrderUpdate

admin.site.site_header = 'EBuyZone'
admin.site.register(product)
admin.site.register(Orders)
admin.site.register(Contact)
admin.site.register(OrderUpdate)
