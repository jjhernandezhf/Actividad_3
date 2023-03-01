#include <iostream>
using namespace std;
main(){
int n1=0,n2=0,n3=0;	
float promedio =0;
string mensaje="";
cout<<"Ingrese Nota No.1: ";
cin>>n1;
cout<<"Ingrese Nota No.2: ";
cin>>n2;
cout<<"Ingrese Nota No.3 :";
cin>>n3;
promedio = (n1+n2+n3)/3;
mensaje = promedio >60 ?"Aprabado" : "Reprobado";
cout<<"El Promedio es: "<<promedio<<" Por lo tanto esta "<<mensaje<<endl;

if(promedio>=0 && promedio<61){
	cout<<"Mala nota";
}

if(promedio>=61 && promedio<81){
	cout<<"Buena nota";
}

if(promedio>=81){
	cout<<"Excelente nota";
}

system("pause");	
}

