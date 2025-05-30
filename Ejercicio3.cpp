#include <iostream>
using namespace std;
int main (){
	float montoc, cantcam, preciou, preciof;
	cout<<"Para calcular el monto total a pagar se necesitan los siguientes datos: "<<endl;
	cout<<"Ingrese la cantidad de camisas a comprar:"<<endl;
	cin>>cantcam;
	cout<<"Indique el precio unitario de cada camisa: "<<endl;
	cin>>preciou;
	montoc=cantcam*preciou;
	if(cantcam>3){
		preciof=montoc*0.8;	
	}
	else{
		preciof=montoc*0.9;
	}
	cout<<"El monto final a pagar es de: "<<preciof<<endl;
	return 0;
}
