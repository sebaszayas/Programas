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
	
	string cadena ("ayy lmao") ;  // Ingreso de cadena simple.
	
	cout << "Cadena: " << cadena  << endl;
	
	
	
	string cadena2 ("ayy lmao",3) ;   // La cadena terminara en el caracter 3.
	
	cout << "Primeros 3 caracteres: " << cadena2 << endl ;
	
	
	
	string cadena3 ("ayy lmao" ,4,7) ;   // la cadena comenzara desde el caracter 5 y terminara en el 8.
	
	cout << "Caracteres desde el 4 hasta el 7: " << cadena3 << endl ;
	
	system ("pause") ;
	return 0 ;
}
