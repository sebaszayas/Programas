#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <time.h>
#include <vector>
#include <cmath>
#include <ctype.h>
using namespace std ;

/* 
 * los strings se declaran con doble comilla y los char con comilla simple *
 
 
== igual, != no igual, > mayor que, < menor que, >= mayor o igual, <= menor o igual
 && and, || or, ! not
 int: 1  double: 1.5  char: 'A'  bool: true or false
 
 for (int Variable = 1 ; Variable < 5 ; Variable++){
 
 vector <int> Lista (10)
 Lista.insert(0)
 
 
poner \n antes de lo que queres escribir hace que la oracion comience abajo.
por ejemplo:   printf("\nDigite empleado 1: "

poner \t antes de lo que queres escribir hace que la oracion comience unos espacios a la derecha.
por ejemplo:   printf("\tDigite empleado 1: "

tambien podes combinar los dos.
por ejemplo: printf("\n\t Digite empleado 1: "

tambien podes poner al final para que la accion ocurra al terminar la oracion.
por ejemplo:   printf("Digite empleado 1: \n\t"
 */
 
main(){
	
	
int a,b,c ;

cout << "escribi el numero 1: " ;

cin>> a;

if (a == 1) {
	
	cout << "jaja gracias esclavo" << endl ;
	
	} else if (! a==1) ; {  //punto y coma es solo en el ultimo "else if"
	
	cout << "vos no me jodes hijo de puta" << endl;
	
}

system ("pause") ;
return 0 ;
}
