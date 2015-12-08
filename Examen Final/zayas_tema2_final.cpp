#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <time.h>
#include <vector>
#include <cmath>
#include <ctype.h>
using namespace std ;

main()
{
      int s,s2,m,m2,h;
      cout<< "Ingrese un numero de segundos: ";
      cin>>s;
      
      m = s / 60;
      h = m / 60;
      
      
      if (s > 59)
      {
            s2 = ((60 * m) - s) * -1;
      } else
      {
            s2 = s;
      }
      
      
      if (m > 59)
      {
            m2 = ((60 * h) - m) * -1;
      } else
      {
            m2 = m;
      }
      
      
      cout<< endl << h << " horas, " << m2 << " minutos y " << s2 << " segundos." << endl << endl << endl;
      
      system ("pause") ;
      return 0 ;
}
