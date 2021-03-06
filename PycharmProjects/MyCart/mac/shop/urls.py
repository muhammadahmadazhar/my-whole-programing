from django.urls import path
from . import views
urlpatterns = [
    path("", views.index, name="shophome"),

    path("about/", views.about, name="aboutus"),
    path("basic/", views.basic, name="bas"),
    path("contact/", views.contact, name="contactus"),
    path("tracker/", views.tracker, name="trackingstatus"),
    path("search/", views.search, name="searchus"),
    path("productview/<int:myid>", views.productview, name="product"),
    path("checkout/", views.checkout, name="check"),
    path("thanks/", views.thanks, name="thanks"),
    path("signup", views.handleSignup, name="handleSignup"),
    path("login", views.handleLogin, name="handleLogin"),
    path("logout", views.handleLogout, name="handleLogout")
]