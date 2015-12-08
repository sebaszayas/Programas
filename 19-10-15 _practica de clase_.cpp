#include <iostream>
#include <fstream>
#include <string.h>
#include <cstdlib>
#include <time.h>
#include <vector>
#include <cmath>
#include <ctype.h>
#include <conio.h>

using namespace std;


// Lee una palabra, la pasa a mayusculas y luego la escribe verticalmente.


int main(){
    
    string cadena;
    int i;
    
    cout<< endl << endl;
    cout<< "\tIngrese la palabra: ";
    getline (cin,cadena);
    cout<< endl;
    
    for(i = 0 ; cadena[i]; i++)
    cadena[i] = toupper(cadena[i]); //<-- convierte a mayusculas.
    
    cout<< "\t" << cadena << endl << endl; //<--- muestra la cadena.
    
    for(i = 0 ; cadena[i]; i++)  //<--- muestra la cadena verticalmente.
    cout<< "\t" << cadena[i] << endl;
    
    cout<< endl << endl;
    
    system ("pause");
    return 0;
    
}
