#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <time.h>
#include <vector>
#include <cmath>
#include <ctype.h> 
using namespace std;

main()
{
    int x=0,PRI[9];
    
    for (int x = 1; x < 11; x+0)
    {
        int a=0,i=0,n=0,n2=0,aux=0;
        
        cout<< "Ingrese un numero: ";  
        cin>> n;
        n2 = n;
        
        for(i = 1; i < (n + 1); i++)    // Proceso para saber si es primo o no.
        {
            if(n % i == 0)
            {
                a++;
            }
        }
        
        if(a != 2)    // Si no es primo hace lo siguiente.
        {
            cout<< endl << "No es Primo, ";
            
            for(aux=0; aux < 2; aux+0)    // Hace el mismo proceso hasta hallar el primo mayor mas secano.
            {
                
                int a=0,i=0,n=0;
                
                for(i = 1; i < (n2 + 1); i++)
                {
                    if(n2 % i == 0)
                    {
                        a++;
                    }
                }
                
                if(a != 2)    // Si no es primo se repite el proceso.
                {
                    n2= n2 + 1;
                    aux = 0;
                }else    // Si es primo cambia aux a 3 para no volver a repetir el proceso y lo agrega al vector PRI.
                {
                    cout<< "el primo mayor mas cercano es " << n2 << ".";
                    aux = 3;
                    PRI[x] = n2;
                    x = x + 1;
                }
           }
        }else    // Si es primo lo agrega al vector PRI.
        {
            cout<< endl << "Si es Primo.";
            PRI[x] = n2;
            x = x + 1;
        }
        
        cout<< endl << endl;
    }
    
    for(int aux2 = 1; aux2 < 10; aux2++)    // Imprime el vector PRI
    {
        cout<< PRI[aux2] << ", ";
    }
    
    cout<< PRI[10] << "." << endl << endl;
    
    system ("pause");
    return 0;
}
