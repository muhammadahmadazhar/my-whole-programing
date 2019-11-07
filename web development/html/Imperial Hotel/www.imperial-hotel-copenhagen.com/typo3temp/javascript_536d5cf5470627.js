
hostName = window.location.hostname;
pathName = window.location.pathname;
console.log(hostName + pathName);

<!-- Adform Tracking Code BEGIN -->
window._adftrack = {
        pm: 317571,
        divider: encodeURIComponent('/'),
        pagename: encodeURIComponent(hostName  + pathName)
    };
    (function () { var s = document.createElement('script'); s.type = 'text/javascript'; s.async = true; s.src = 'https://track.adform.net/serving/scripts/trackpoint/async/'; var x = document.getElementsByTagName('script')[0]; x.parentNode.insertBefore(s, x); })();


var script = document.createElement("noscript");
script.innerHTML = 
	'<p style="margin:0;padding:0;border:0;">'+
        '<img src="https://track.adform.net/Serving/TrackPoint/?pm=317571&ADFPageName=WebsiteName|SectionName|SubSection|PageName&ADFdivider=|" width="1" height="1" alt="" />'+
    '</p>';
document.head.appendChild(script);
<!-- Adform Tracking Code END -->