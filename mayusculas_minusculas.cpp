#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <time.h>
#include <vector>
#include <cmath>
#include <ctype.h>
#include <conio.h>

using namespace std ;

int main()
{
   
   int aux ;
   int maomi ;
   string cadena ;
   char minusculas[] = "minusculas" ;
   
   cout<< "ingrese la cadena: " ;
   cin >> cadena ;
   cout<< endl;
   
   cout<< "quiere pasarla a minusculas(1) o a mayusculas(2)? " ;
   cin>> maomi ;
   cout<< endl;
   
   if (maomi == 1)
   {
   	  for( aux = 0 ; cadena[aux] ; aux++ )
	  {
	     cadena[aux] = tolower(cadena[aux]);  //   <--convierte a minusculas.
   	  }
   } else {
   	  for( aux = 0 ; cadena[aux] ; aux++ )
	  {
	     cadena[aux] = toupper(cadena[aux]);  //   <--convierte a mayusculas.
   	  }
   }
   
   cout<< cadena << endl << endl;  //   <---muestra  la cadena.
   
   
   system ("pause") ;
   return 0 ;
   
}
