#include <iostream>
using namespace std;
int main (){
	cout<<"Para poder saber si el alumno aprobo indique las 3 notas a calcular (estos valores son de 0 a 200)"<<endl;
	int promedio, notaA, notaB, notaC;
	cout<<"Ingrese la notaA"<<endl;
	cin>>notaA;
	cout<<"Ingrese la notaB"<<endl;
	cin>>notaB;
	cout<<"Ingrese la notaC"<<endl;
	cin>>notaC;
	promedio=(notaA+notaB+notaC)/3;
	if(promedio>=70){
		cout<<"Aprueba";
	}else{
		cout<<"Reprueba";
	}
	return 0;
}
