#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <time.h>
#include <vector>
#include <cmath>
#include <ctype.h>

using namespace std ;

int main() {
	
	int variable ;
	
	cout << "Ingrese el valor de la variable: " ;
	
	cin >> variable ;
	
	cin.ignore() ; // Poner esto luego de ingresar un "cin" para que no interfiera con el ingreso de cadenas mas adelante.
	
	cout << "El valor de la variable es: " << variable << endl << endl ;
	
	
	
	string cadena ;
	
	cout << "Ingrese una cadena: " ;
	
	getline (cin,cadena) ; // Se usa para ingresar una cadena con espacios, si se usa "cin" no se pueden poner espacios.
	
	cout << "La cadena dice: " << cadena << endl << endl ;
	
	
	
	string cadena2 ;
	
	cout << "ingrese una cadena que contenga la letra M: " ;
	
	getline (cin,cadena2,'m') ; // El tercer parametro es para elegir la letra donde termina la cadena "ayy lmao" = "ayy l"
	
	cout << "la cadena dice: " << cadena2 << endl << endl ;
	
	
	
	string cadena3 ;
	
	cout << "ingrese una cadena: " ;
	
	getline (cin,cadena3) ;
	getline (cin,cadena3) ;
	
	cout << "El numero de caracteres es: " << cadena3.length() << endl << endl ;  // "ejemplo.length()" devuelve el numero de caracteres
																				  // de una cadena.
	system ("pause") ;
	return 0 ;
}
