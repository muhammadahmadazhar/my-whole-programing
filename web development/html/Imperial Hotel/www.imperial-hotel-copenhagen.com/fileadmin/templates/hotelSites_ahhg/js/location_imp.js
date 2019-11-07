var hotel_location = new google.maps.LatLng(55.675503, 12.561783);
var hotel_address = "Imperial Hotel, Vester Farimagsgade 9, DK-1606 København V";

var parking = [
    new google.maps.LatLng(55.675685, 12.560667)
];

var markers = [];
var iterator = 0;
var map;


var styles = [ { 
  featureType: 'road.highway',
  elementType: 'all',
  stylers: [
    { hue: '#999999' },
    { saturation: -100 },
    { lightness: -6 },
    { visibility: 'on' }
  ]
  },{
  featureType: 'road.arterial',
  elementType: 'all',
  stylers: [
    { hue: '#999999' },
    { saturation: -100 },
    { lightness: -22 },
    { visibility: 'on' }
  ]
  },{
  featureType: 'road.local',
  elementType: 'geometry',
  stylers: [
    { visibility: 'simplified'}
  ]
  },{
  featureType: 'landscape.man_made',
  elementType: 'all',
  stylers: [
    { hue: '#E2E2E2' },
    { saturation: -100 },
    { lightness: 0 },
    { visibility: 'on' }
  ]
  },{
  featureType: 'landscape.natural',
  elementType: 'all',
  stylers: [
    { hue: '#E2E2E2' },
    { saturation: -100 },
    { lightness: -7 },
    { visibility: 'on' }
  ]
  },{
  featureType: 'poi.park',
  elementType: 'all',
  stylers: [
    { hue: '#CCCCCC' },
    { saturation: -100 },
    { lightness: 9 },
    { visibility: 'on' }
  ]
  },{
  featureType: 'poi.business',
  elementType: 'all',
  stylers: [
    { hue: '#CCCCCC' },
    { saturation: -100 },
    { lightness: -6 },
    { visibility: 'on' }
  ]
  },{
  featureType: 'poi.attraction',
  elementType: 'all',
  stylers: [
    { hue: '#CCCCCC' },
    { saturation: -100 },
    { lightness: 9 },
    { visibility: 'on' }
  ]
  },{
  featureType: 'poi.medical',
  elementType: 'all',
  stylers: [
    { hue: '#CCCCCC' },
    { saturation: -100 },
    { lightness: -8 },
    { visibility: 'on' }
  ]
  },{
  featureType: 'poi.school',
  elementType: 'all',
  stylers: [
    { hue: '#CCCCCC' },
    { saturation: -100 },
    { lightness: -4 },
    { visibility: 'on' }
  ]
  },{
  featureType: 'poi.government',
  elementType: 'all',
  stylers: [
    { hue: '#CCCCCC' },
    { saturation: -100 },
    { lightness: -6 },
    { visibility: 'on' }
  ]
  },{
  featureType: 'poi.place_of_worship',
  elementType: 'all',
  stylers: [
    { hue: '#CCCCCC' },
    { saturation: -100 },
    { lightness: -6 },
    { visibility: 'on' }
  ]
  }
];
var styledMapType = new google.maps.StyledMapType(styles, { name: 'Styled' });
var hotel_marker;
  
function InitMap(options, mapIdentifier, defaultLocation)
{ // function to initialize map
  var settings = // json variable for default settings
  {
  //mapTypeControlOptions: {
  //  mapTypeIds: [ 'Styled'] },
    zoom: 13,
    center: defaultLocation,
    mapTypeId: google.maps.MapTypeId.ROADMAP,
    mapTypeId: 'Styled'
  };
  if (options!=null) settings = options; // if no options provided, start the map with default settings
  map = new google.maps.Map(document.getElementById(mapIdentifier), settings);
  
  map.mapTypes.set('Styled', styledMapType);
  map.setCenter(defaultLocation);
  hotel_marker = new google.maps.Marker({
          position: defaultLocation,
          map: map,
          draggable: false,
          animation: google.maps.Animation.DROP,
          icon: "/fileadmin/2016/assets/images/google-map-icons/imp.png",
          title: hotel_address
      });
  return map;
}

function handle_clicks()
{
  $('#home-sidebar #icon_list #icon #hotel').hover(function(){
    hotel_marker.setAnimation(google.maps.Animation.BOUNCE);
    },
    function(){
    hotel_marker.setAnimation(null);
    }
  );

  $('#home-sidebar #icon_list #icon #parking').hover(function(){
  if($(this).hasClass('selected')){
    for (var i = 0; i < parking.length; i++) {
              markers[i].setAnimation(google.maps.Animation.BOUNCE);
        }
      }else{}
  },
  function(){
  if($(this).hasClass('selected')){
    for (var i = 0; i < parking.length; i++) {
      markers[i].setAnimation(null);
    }
  }else{}
  }
  );
  
  $('#home-sidebar #icon_list #icon #parking').click(function(){
    if($(this).hasClass('selected'))
      { 
        $(this).removeClass('selected');
        iterator = 0;
        map.setZoom(13);
        map.setCenter(hotel_location);
        for (var i = 0; i < parking.length; i++) {
                  markers[i].setMap(null);
            }
            markers = [];
      }
    else
      {
        $(this).addClass('selected');
        map.setZoom(15);
        for (var i = 0; i < parking.length; i++) {
                setTimeout(function() {
                  addMarker();
                }, i * 500);
            }
      }
  });
}
function addMarker() {
    markers.push(new google.maps.Marker({
      position: parking[iterator],
      map: map,
      draggable: false,
      animation: google.maps.Animation.DROP,
      icon: "/fileadmin/2016/assets/images/google-map-icons/parkering.png"
    }));
    iterator++;
  }
  
/*  
$(document).ready(function(){

  if($('#map').get(0))
  { // only initialize the map if map is located inside the page
    map = InitMap(null,'map', hotel_location); // initialize the map on default location
    handle_clicks(); // click events handling by jQuery  
  }
  
});
*/


   setTimeout(function(){
      map = InitMap(null,'map', hotel_location); // initialize the map on default location
      handle_clicks(); // click events handling by jQuery
}, 100);