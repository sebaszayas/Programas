#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <time.h>
#include <vector>
#include <cmath>
#include <ctype.h>

using namespace std;

int main() {
	
	int m1, m2, m3, m4, m5, aux;
	string a1, a2, a3, a4, a5, c1, c2, c3, c4, c5;
	
	cout<< "Ingrese los datos del primer alumno: " << endl;
	cout<< "Nombre: ";
	cin>> a1;
	cout<< "Carrera: ";
	cin>> c1;
	do {
		cout<< "Monto de la cuota a pagar (desde 500.000 hasta 850.000): ";
		cin>> m1;
	} while ( m1 < 500000 || m1 > 850000);
	
	cout<< "Ingrese los datos del segundo alumno: " << endl;
	cout<< "Nombre: ";
	cin>> a2;
	cout<< "Carrera: ";
	cin>> c2;
	do {
		cout<< "Monto de la cuota a pagar (desde 500.000 hasta 850.000): ";
		cin>> m2;
	} while ( m2 < 500000 || m2 > 850000);
	
	cout<< "Ingrese los datos del tercer alumno: " << endl;
	cout<< "Nombre: ";
	cin>> a3;
	cout<< "Carrera: ";
	cin>> c3;
	do {
		cout<< "Monto de la cuota a pagar (desde 500.000 hasta 850.000): ";
		cin>> m3;
	} while ( m3 < 500000 || m3 > 850000);
	
	cout<< "Ingrese los datos del cuarto alumno: " << endl;
	cout<< "Nombre: ";
	cin>> a4;
	cout<< "Carrera: ";
	cin>> c4;
	do {
		cout<< "Monto de la cuota a pagar (desde 500.000 hasta 850.000): ";
		cin>> m4;
	} while ( m4 < 500000 || m4 > 850000);
	
	cout<< "Ingrese los datos del quinto alumno: " << endl;
	cout<< "Nombre: ";
	cin>> a5;
	cout<< "Carrera: ";
	cin>> c5;
	do {
		cout<< "Monto de la cuota a pagar (desde 500.000 hasta 850.000): ";
		cin>> m5;
	} while ( m5 < 500000 || m5 > 850000);
	
	cout<< " " << endl;
	
	for (aux=0; aux<a1.length(); aux++){
		a1[aux] = toupper(a1[aux]);
	}
	aux = 0;
	cout<< a1 << endl;
	if (c1[0] == 'i' || c1[0] == 'I'){
		cout<< "Monto del descuento: ";
		cout<<  m1 * 0.12 << endl;
		cout<< "Monto a pagar: ";
		cout<< m1 * 0.88 << endl;
	} else if (c1[0] == 't' || c1[0] == 'T'){
		cout<< "Monto del descuento: ";
		cout<< m1 * 0.20 << endl;
		cout<< "Monto a pagar: ";
		cout<< m1 * 0.80 << endl;
		} if(c1[0] == 'a' || c1[0] == 'A'){
		cout<< "Monto del descuento: 0" << endl;
		cout<< "Monto a pagar: ";
		cout<< m1 << endl;
		}
	
	cout<< " " << endl;
	
	for (aux=0; aux<a2.length(); aux++){
		a2[aux] = toupper(a2[aux]);
	}
	aux = 0;
	cout<< a2 << endl;
	if (c2[0] == 'i' || c2[0] == 'I'){
		cout<< "Monto del descuento: ";
		cout<<  m2 * 0.12 << endl;
		cout<< "Monto a pagar: ";
		cout<< m2 * 0.88 << endl;
	} else if (c2[0] == 't' || c2[0] == 'T'){
		cout<< "Monto del descuento: ";
		cout<< m2 * 0.20 << endl;
		cout<< "Monto a pagar: ";
		cout<< m2 * 0.80 << endl;
		} if(c2[0] == 'a' || c2[0] == 'A'){
		cout<< "Monto del descuento: 0" << endl;
		cout<< "Monto a pagar: ";
		cout<< m2 << endl;
		}
	
	cout<< " " << endl;
	
	for (aux=0; aux<a3.length(); aux++){
		a3[aux] = toupper(a3[aux]);
	}
	aux = 0;
	cout<< a3 << endl;
	if (c3[0] == 'i' || c3[0] == 'I'){
		cout<< "Monto del descuento: ";
		cout<<  m3 * 0.12 << endl;
		cout<< "Monto a pagar: ";
		cout<< m3 * 0.88 << endl;
	} else if (c3[0] == 't' || c3[0] == 'T'){
		cout<< "Monto del descuento: ";
		cout<< m3 * 0.20 << endl;
		cout<< "Monto a pagar: ";
		cout<< m3 * 0.80 << endl;
		} if(c3[0] == 'a' || c3[0] == 'A'){
		cout<< "Monto del descuento: 0" << endl;
		cout<< "Monto a pagar: ";
		cout<< m3 << endl;
		}
	
	cout<< " " << endl;
	
	for (aux=0; aux<a4.length(); aux++){
		a4[aux] = toupper(a4[aux]);
	}
	aux = 0;
	cout<< a4 << endl;
	if (c4[0] == 'i' || c4[0] == 'I'){
		cout<< "Monto del descuento: ";
		cout<<  m4 * 0.12 << endl;
		cout<< "Monto a pagar: ";
		cout<< m4 * 0.88 << endl;
	} else if (c4[0] == 't' || c4[0] == 'T'){
		cout<< "Monto del descuento: ";
		cout<< m4 * 0.20 << endl;
		cout<< "Monto a pagar: ";
		cout<< m4 * 0.80 << endl;
		} if(c4[0] == 'a' || c4[0] == 'A'){
		cout<< "Monto del descuento: 0" << endl;
		cout<< "Monto a pagar: ";
		cout<< m4 << endl;
		}
	
	cout<< " " << endl;
	
	for (aux=0; aux<a5.length(); aux++){
		a5[aux] = toupper(a5[aux]);
	}
	aux = 0;
	cout<< a5 << endl;
	if (c5[0] == 'i' || c5[0] == 'I'){
		cout<< "Monto del descuento: ";
		cout<<  m5 * 0.12 << endl;
		cout<< "Monto a pagar: ";
		cout<< m5 * 0.88 << endl;
	} else if (c5[0] == 't' || c5[0] == 'T'){
		cout<< "Monto del descuento: ";
		cout<< m5 * 0.20 << endl;
		cout<< "Monto a pagar: ";
		cout<< m5 * 0.80 << endl;
		} if(c5[0] == 'a' || c5[0] == 'A'){
		cout<< "Monto del descuento: 0" << endl;
		cout<< "Monto a pagar: ";
		cout<< m5 << endl;
		}
	
	cout<< " " << endl;
	
	system("pause");
	return 0;
}
