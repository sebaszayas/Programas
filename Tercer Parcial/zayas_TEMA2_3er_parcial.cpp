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
   for (int i = 1; i < 4; i++)
   {
   int PAR[3];
   int POR[3];
   double aux = 0, aux2 = 0, aux3 = 0, aux4 = 0, aux5 = 0, aux6 = 0;
   
   cout<< "alumno " << i << ": " << endl << endl;
   
   for (int a = 1; a < 4; a++)  // ingresa las notas
   {
    cout<<"Ingrese la nota del parcial "<< a << ": ";
    cin>>PAR[a];
   }
   
   cout<< endl;
   
   for (int a = 1; a < 4; a++)
   {
    POR[a] = PAR[a] * 100 / 20;
    cout<< "Nota del parcial "<< a << " en base a 100 puntos: " << POR[a] <<endl;
   }
   
   cout<< endl;
   
   for(int a = 1; a < 4 ; a++)   // saca los dos numeros mayores
    {
     if(POR[a]>aux)
     {
      aux = POR[a];
     }
     if(POR[a]>aux2)
     {
      aux = aux2;
      aux2 = POR[a];
     }
    }
   
   cout<< "Las dos notas mayores son: " << aux2 << " y " << aux << "." << endl << endl;
   
   aux3 = (aux + aux2) * 60 / 200;
   
   cout<< "Total de parciales: " << aux3 << "%" << endl << endl;
   
   aux4 = 60 - aux3;
   
   aux5 = aux4 * 100 / 40;
   
   aux6 = aux5 * 20 / 100;
   
   cout<< "El alumno debe hacer " << aux6 << " puntos (" << aux5 << "%) del examen final para pasar." << endl << endl << endl;
   }
   
   system ("pause") ;
   return 0 ;
}
