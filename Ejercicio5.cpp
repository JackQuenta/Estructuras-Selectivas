/*5: Calcular el número de pulsaciones que debe tener una persona por cada 10 segundos de
ejercicio aeróbico; la fórmula que se aplica es:
cuando el sexo es femenino : num. pulsaciones = (220 - edad)/10
y si el sexo es masculino : num. pulsaciones = (210 - edad)/10*/
#include <iostream>
using namespace std;
int main(){
	double pulsaciones; 
	int edad, genero; //la variable genero solo recibe los valores 1 o 0
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
