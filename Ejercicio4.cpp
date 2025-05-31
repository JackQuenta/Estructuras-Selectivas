/*4: En un supermercado se hace una promoción, mediante la cual el cliente obtiene un
descuento dependiendo de un número que se escoge al azar. Si el numero escogido es
menor que 74 el descuento es del 15% sobre el total de la compra, si es mayor o igual a 74
el descuento es del 20%. Obtener cuánto dinero se le descuenta.*/
#include <iostream>
using namespace std;
int main(){
	double numAzar, totalc, desct;
	cout<<"Para obtener el monto el descuento realizado se necesitan los siguientes datos: "<<endl;
	cout<<"Monto total de la compra"<<endl;
	cin>>totalc;
	if (totalc > 0){
		cout<<"Numero elegido al azar"<<endl;
		cin>>numAzar;
		if (numAzar > 0){
			if(numAzar<74){
				desct=totalc*0.15;
			}else{
				desct=totalc*0.20;}
				cout<<"El descuento realizado es de: "<<desct<<endl;
		}else{
			cout<<"El dato que ingreso es incorrecto";
		}
	}else{
		cout<<"El dato que ingreso es incorrecto";
	}
	return 0;
}
