#include <iostream>
#include <fstream>
#include <shlobj.h>
#include <windows.h>
#include <string.h>
#include <sstream>
using namespace std;
main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char b[50]="",n[50],h[]="\\index.html",c[]="\\css",s[]="\\style.css", a[50]="",d[50]="",j[]="\\js",app[]="\\app.js";
	

	//cout<<"¬ведите название папки:"<<endl;
	cout<<"Enter name folder:";
	cin>>n;
	CreateDirectory(+n,NULL);
	
	ofstream Html;
	strcat(b,n);
	strcat(b,h);
	Html.open(b);
	
	Html<<"<!DOCTYPE>\n";
	Html<<"<html lang='en'>\n";
	Html<<"<head>\n";
	Html<<"		<meta charset='UTF-8'>\n";
	Html<<"		<title>Title</title>\n";
	Html<<"		<link rel='stylesheet' href='css/style.css/>'\n";
	Html<<"</head>\n";
	Html<<"<body>\n";
	Html<<"	<div class='content'>\n";
	Html<<"		<h1>Hello! I'm ready for edit! :)</h1>\n";
	Html<<"	</div>\n";
	Html<<"<script src='js/app.js'></script>\n";
	Html<<"</body>\n";
	Html<<"</html>\n";
	
	strcat(a,n);
	strcat(a,c);
	CreateDirectory(+a,NULL);
	ofstream Css;
	strcat(a,s);
	Css.open(a);
	
	Css<<"/*this source generate automatically */\n";
	Css<<"\n";
	Css<<"html {\n";
	Css<<"\n";
	Css<<"}\n";
	Css<<"\n";
	Css<<"body {\n";
	Css<<"\n";
	Css<<"}\n";
	Css<<"\n";
	Css<<".content {\n";
	Css<<"\n";
	Css<<"}\n";
	Css<<"\n";
	Css<<".content h1 {\n";
	Css<<"\n";
	Css<<"}\n";
	Css<<"\n";
	
	strcat(d,n);
	strcat(d,j);
	CreateDirectory(+d,NULL);
	ofstream Js;
	strcat(d,app);
	Js.open(d);
	
	Js<<"/*this source generate automatically */\n";
	Js<<"\n";
}
