//programa: cajero automatico
//autor: Jasmany Guagua
//fecha:12-10-2023
#include<iostream>
using namespace std;
int main()
{
	int c1,c2,c3,c01=22,c02=50,c03=30;
	float valor,saldodisponible=10.000;
	cout<<"ingrese c1 c2 c3:";cin>>c1>>c2>>c3;
	if(c1==c01){
	if(c2==c02){
	if(c3==c03){
	cout<<"ingrese el valor a retirar:";cin>> valor;
	saldodisponible=saldodisponible-valor;
	}else{
	cout<<"contraseña c3 incorrecta"<<endl;}
	}else{
	cout<<"conttaseña c2 incorrecta"<<endl;}
	}else{
	cout<<"contraseña c1 incorrecta"<<endl;}
	return(0);
}
