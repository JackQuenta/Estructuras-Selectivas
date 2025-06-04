/*1: Determinar si un alumno aprueba o reprueba un curso, sabiendo que aprobara si su
promedio de tres calificaciones es mayor o igual a 70; reprueba en caso contrario.
*/
#include <iostream>
using namespace std;
int main (){
	cout<<"Para poder saber si el alumno aprobo indique las 3 notas a calcular (estos valores son de 0 a 200)"<<endl;
	int promedio, notaA, notaB, notaC;
	cout<<"Ingrese la notaA"<<endl;
	cin>>notaA;
	if (notaA >= 0 and notaA <= 200 ){
		cout<<"Ingrese la notaB"<<endl;
		cin>>notaB;
			if (notaA >= 0 and notaA <= 200 ){
				cout<<"Ingrese la notaC"<<endl;
				cin>>notaC;
					if (notaA >= 0 and notaA <= 200 ){
						promedio=(notaA+notaB+notaC)/3;
							if(promedio>=70){
								cout<<"Aprueba";
							}else{
								cout<<"Reprueba";
							}
					}else{
						cout<<"NotaC incorrecta"<<endl;}
			}else{
				cout<<"NotaB incorrecta"<<endl;}
	}else{
		cout<<"NotaA incorrecta"<<endl;}
	return 0;
	//ES UN BUEN TRABAJO 
}
