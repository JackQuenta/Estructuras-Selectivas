/*3: Calcular el total a pagar por la compra de camisas. Si se compran tres camisas o más se
aplica un descuento del 20% sobre el total de la compra y si son menos de tres camisas un
descuento del 10%*/
#include <iostream>
using namespace std;
int main (){
	double montocompra, cantcamisas, preciounitario, preciofinal; //variables
	cout<<"Para calcular el monto total a pagar se necesitan los siguientes datos: "<<endl;
	cout<<"Ingrese la cantidad de camisas a comprar:"<<endl;
	cin>>cantcamisas;
	if (cantcamisas<=0){
		cout<<"Ingreso un valor incorrecto";
	}
	if (cantcamisas>0){
		cout<<"Indique el precio unitario de cada camisa: "<<endl;
		cin>>preciounitario;
		montocompra=cantcamisas*preciounitario;
		if(cantcamisas>3){
			preciofinal=montocompra*0.8;	
		}else{
		preciofinal=montocompra*0.9;}
	cout<<"El monto final a pagar es de: "<<preciofinal<<endl;}
	return 0;
}
