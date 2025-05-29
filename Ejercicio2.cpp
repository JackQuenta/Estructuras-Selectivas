/*2: En un almacén se hace un 20% de descuento a los clientes cuya compra supere los
S/.1000 ¿Cuál será la cantidad que pagara una persona por su compra?*/
#include <iostream>
using namespace std;
int main (){
	float compra, valorf;
	cout<<"Para determinar el monto final a pagar se necesita el siguiente dato: "<<endl;
	cout<<"Ingrese el monto inicial de la compra: ";
	cin>>compra;
	if (compra>=0){
		if (compra>1000){
			valorf=compra*0.8;
			cout<<"El monto final de la compra con descuento del 20% es de: "<<valorf<<endl;	
		}else{
			cout<<"valor final a pagar de la compra es de: "<<compra<<endl;
    	}
	}else{
		cout<<"El monto de la compra es incorrecto";}
	return 0;	
}
