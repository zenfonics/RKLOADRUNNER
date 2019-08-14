Action()
{
//This is my first pull and commit
	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_cookie("_gid=GA1.2.2062477751.1565802783; DOMAIN=slicingdice.com");

	web_add_cookie("_ga=GA1.2.1274398895.1565802783; DOMAIN=slicingdice.com");

	web_add_cookie("__cfduid=df42eccc802cc10f7c1079c4f64ee82dd1565802727; DOMAIN=slicingdice.com");

	web_add_cookie("__cflb=762554072; DOMAIN=slicingdice.com");

	web_url("slicingdice.com", 
		"URL=https://slicingdice.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(9);

	web_link("Product", 
		"Text=Product", 
		"Snapshot=t2.inf", 
		EXTRARES, 
		"Url=/assets/img/Teste2.png", ENDITEM, 
		"Url=/assets/fonts/fontawesome-webfont.eot?", ENDITEM, 
		"Url=/assets/fonts/themify.eot?", ENDITEM, 
		LAST);

	web_add_cookie("_gat_gtag_UA_70742654_6=1; DOMAIN=slicingdice.com");

	web_link("Product Overview", 
		"Text=Product Overview", 
		"Snapshot=t3.inf", 
		LAST);

	return 0;
}