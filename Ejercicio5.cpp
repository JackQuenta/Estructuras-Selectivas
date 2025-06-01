#include <iostream>
using namespace std;
int main(){
	float pulsaciones, edad, genero;
	cout<<"Para determinar el numero de pulsaciones indique los siguientes datos: "<<endl;
	cout<<"Indique la edad: "<<endl;
	cin>>edad;
	cout<<"Indique si es hombre o mujer (hombre  = 1 y mujer = 0)"<<endl;
	cin>>genero;
	if(genero=1){
		pulsaciones=(210-edad)/10;
	}else{
		if(genero=0){
			pulsaciones=(220-edad)/10;
		}else{
			cout<<"Datos incorrectos"<<endl;
		}
	}
	cout<<"El numero de pulsasiones es de: "<<pulsaciones<<endl;
	return 0;
}
