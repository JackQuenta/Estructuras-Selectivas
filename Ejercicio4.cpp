#include <iostream>
using namespace std;
int main(){
	float numAzar, totalc, desct;
	cout<<"Para obtener el monto el descuento realizado se necesitan los siguientes datos: "<<endl;
	cout<<"Monto total de la compra"<<endl;
	cin>>totalc;
	cout<<"Numero elegido al azar"<<endl;
	cin>>numAzar;
	if(numAzar<74){
		desct=totalc*0.15;
	}
	else{
		desct=totalc*0.20;
	}
	cout<<"El descuento realizado es de: "<<desct<<endl;
	return 0;
}
