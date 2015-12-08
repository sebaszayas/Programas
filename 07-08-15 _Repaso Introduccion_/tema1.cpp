#include <cstdlib>
#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
    int a = 0,b = 0,c = 0 ;
    do
    {
          cout<< "Las notas deben ser entre 0 y 100" << endl;
          cout<< "Escriba la primera nota: ";
          cin>> a;
    } while(a < 0 || a > 100);
    do
    {
          cout<< "Las notas deben ser entre 0 y 100" << endl;
          cout<< "Escriba la segunda nota: ";
          cin>> b;
    } while(b < 0 || b > 100);
    do
    {
          cout<< "Las notas deben ser entre 0 y 100" << endl;
          cout<< "Escriba la tercera nota: ";
          cin>> c;
    } while(c < 0 || c > 100);
    if (a>=b && a>=c && b>=c)
    {
            cout<< "las notas mayores son: ";
            cout<< b;
            cout<< ", ";
            cout<< a << endl;
            system("PAUSE");
            return EXIT_SUCCESS;
            } else if (a>=b && a>=c && c>=b)
                   {
                           cout<< "Las notas mayores son";
                           cout<< c;
                           cout<< ", ";
                           cout<< a << endl;
                           system("PAUSE");
                           return EXIT_SUCCESS; 
                           } else if (b>=a && b>=c && a>=c)
                                  {
                                           cout<< "Las notas mayores son";
                                           cout<< a;
                                           cout<< ", ";
                                           cout<< b << endl;
                                           system("PAUSE");
                                           return EXIT_SUCCESS;
                                           } else if (b>=a && b>=c && c>=a)
                                                  {
                                                           cout<< "Las notas mayores son";
                                                           cout<< c;
                                                           cout<< ", ";
                                                           cout<< b << endl;
                                                           system("PAUSE");
                                                           return EXIT_SUCCESS;
                                                           } else if (c>=a && c>=b && a>=b)
                                                                  {
                                                                           cout<< "Las notas mayores son";
                                                                           cout<< a;
                                                                           cout<< ", ";
                                                                           cout<< c << endl;
                                                                           system("PAUSE");
                                                                           return EXIT_SUCCESS;
                                                                           } else if (c>=a && c>=b && b>=c)
                                                                                  {
                                                                                           cout<< "Las notas mayores son";
                                                                                           cout<< b;
                                                                                           cout<< ", ";
                                                                                           cout<< c << endl;
                                                                                           system("PAUSE");
                                                                                           return EXIT_SUCCESS;
                                                                                           }
                                                                                           }
