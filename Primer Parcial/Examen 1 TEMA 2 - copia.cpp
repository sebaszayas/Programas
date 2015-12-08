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
    
    int DOS[5];
    int aux = 1;
    
    for (int a = 1; a < 6; a++){
        cout<< "Ingrese el elemento " << a << ": ";
        cin>> DOS[a];
    }
    
    DOS[1] = DOS[1] + DOS[2] + DOS[3] + DOS[4] + DOS[5];
    DOS[2] = DOS[2] + DOS[3] + DOS[4] + DOS[5];
    DOS[3] = DOS[3] + DOS[4] + DOS[5];
    DOS[4] = DOS[4] + DOS[5];
    
    cout<< endl;
    
    for (int a = 1; a < 6; a++){
        cout<< DOS[a] << endl;
    }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
