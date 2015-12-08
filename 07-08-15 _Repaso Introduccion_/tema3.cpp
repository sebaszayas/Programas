#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <time.h>
#include <vector>
#include <cmath>
using namespace std;

int main(){
	
	int alumnos = 0, alumno = 1, ausentes = 0, presentes = 0, aplazados = 0, nota, loop = 0;
	char aop;
	
	cout<< "Ingrese la cantidad de alumnos: ";
	cin>> alumnos;
	cout<< " " << endl;
	cout<< "Ingrese A si el alumno estuvo ausente y P si estuvo presente." << endl;
	cout<< "Si el alumno estuvo presente, ingrese su nota del 0 a 5." << endl;
	cout<< " " << endl;
	
	do {
		cout<< "Alumno " << alumno << ": ";
		cin>> aop;
		
		if (aop == 'a' || aop == 'A') {
			ausentes = ausentes + 1;
			alumno = alumno + 1;
			loop = loop + 1;
			cout<< " " << endl;
			
		} else if ( aop == 'p' || aop == 'P') {
			if ( aop == 'p' || aop == 'P'){
			presentes = presentes + 1;
			cout<< "Nota: ";
			cin>> nota;
			cout<< " " << endl;
			
			} if (nota >= 0 && nota <= 1) {
				aplazados = aplazados + 1;
				alumno = alumno + 1;
				loop = loop + 1;
				
			} else if (nota >= 2 && nota <= 5){
				alumno = alumno + 1;
				loop = loop + 1;}
		}
		} while (loop < alumnos);
	
	cout<< presentes << " alumnos presentes." << endl;
	cout<< ausentes << " alumnos ausentes." << endl;
	cout<< aplazados << " alumnos aplazados." << endl;
	cout<< (presentes - aplazados) << " alumnos que aprobaron el examen." << endl;
	
	system("pause");
	return 0;
}
