// programa: Seguridad
// autor: Jasmany Guagua
// fecha:05-10-2023
#include<iostream>
using namespace std;
int main()
{
	int c11,c12,c13,c01,c02,c03;
	cout<<"ingrese las contraseñas c11 c12 c13";
	cin>>c11>>c12>>c13;
	if(c11==c01){
	if(c12==c02){
	if(c13==c03){
	cout<<"acceso autorizado";
	}else{
	cout<<"la tercera contraseña no fue correcta"<<endl;}
	}else{
	cout<<"la segunda contraseña no fue correcta"<<endl;}
	}else{
	cout<<"la primera contraseña no fue correcta"<<endl;}
	return(0);
}




