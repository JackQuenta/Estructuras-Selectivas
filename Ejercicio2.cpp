#include <iostream>
using namespace std;
int main (){
	float compra, valorf;
	cout<<Para determinar el monto final a pagar se necesita el siguiente dato: <<endl;
	cout<<Ingrese el monto inicial de la compra: ;
	cin>>compra;
	if (compra>1000){
		valorf=compra*0.8;
		cout<<El monto final de la compra con descuento del 20% es de: <<valorf<<endl;	
	}else{
		cout<<valor final a pagar de la compra es de: <<compra<<endl;
    }
	return 0;	
}
