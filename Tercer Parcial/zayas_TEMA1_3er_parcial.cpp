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
   int PAR[3];
   int POR[3];
   
   for (int a = 1; a < 4; a++)
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
   
   system ("pause") ;
   return 0 ;
}
