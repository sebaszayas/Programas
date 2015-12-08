#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <time.h>
#include <vector>
#include <cmath>
#include <ctype.h>

using namespace std;

int main(){
    
    int aux;
    
    cout<< "Ingrese el numero de elementos: ";
    cin>> aux;
    
    int aux2 = aux;
    int UNO[aux];
    int UNO2[aux];
    
    cout<< endl;
    
    for (int a = 1; a < (aux2 + 1); a++){
        cout<< "Ingrese el elemento " << a << ": ";
        cin>> UNO[a];
    }
    
    cout<<endl;
    
    for (int a = 1; a < (aux2 + 1); a++){
        UNO2[a] = UNO[a];
    }
    
    for (int a = 1; a < (aux2 + 1); a++){
        if(a % 2 == 0){ //  par
             //nada...
        } else { //  impar
             aux = UNO[a];
             UNO[a] = UNO[a + 1];
             UNO[a + 1] = aux;
        }
    }
    
    cout<< "Vector Original:" << endl << endl;
    
    for (int a = 1; a < (aux2 + 1); a++){
        cout<< "\t" << UNO2[a] << endl;
    }
    
    cout<< endl << "Vector Resultante:" << endl << endl;
    if (aux2 % 2 == 0){
             for (int a = 1; a < (aux2 + 1); a++){
             cout<< "\t" << UNO[a] << endl;
             }
    } else {
           for (int a = 1; a < (aux2); a++){
           cout<< "\t" << UNO[a] << endl;
           }
           UNO[aux2] = UNO2[aux2];
           cout<< "\t" << UNO[aux2] << endl;
    }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
