#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <time.h>
#include <vector>
#include <cmath>
#include <ctype.h>
#include <stdlib.h>

using namespace std ;

/*
Hacer un programa que ingrese una matriz A de "F" filas y "C" columnas, con números
 aleatorios que no superen 200. Ordenar la matriz en forma ascendente.
*/

main(){
       
       int a, aux, f, c, menor=0;
       cout<< "\n   * Advertencia: una matriz de 15 o mas columnas es muy grande para verla completa en la pantalla. * \n\n";
       cout<< "   filas: ";
       cin>> f;
       cout<< "   columnas: ";
       cin>> c;
       
       int matriz[f][c];
       
       cout<< "\n\n   Matriz:\n\n";
       srand(time(0));  // Para que cada vez que se inicie el programa se generen nuevos numeros
       
       
       //Crea e imprime la matriz:
       
       for (int i=0; i<f; i++)  // filas
       {
          for (int j=0; j<c; j++)  // columnas
          {
             matriz[i][j] = rand()%(201 - 1);  // agrega el numero al azar a la matriz
             cout<< "\t" << matriz[i][j];  // imprime la matriz con espacios entre columnas
          }
          cout<< "\n\n" ;  // baja a la siguiente fila
       }
       
       cout<< "\n";
       
       
       // Ordena la matriz de menor a mayor:
     
       for(int i=0; i<f; i++)
       {
          for(int j=0; j<c; j++)
          {
             for(int x=0; x<f;x++)
             {
                for(int y=0; y<c; y++)
                {
                   if(matriz[i][j] < matriz[x][y])
                   {
                      menor = matriz[i][j];
                      matriz[i][j] = matriz[x][y];
                      matriz[x][y] = menor;
                   }
                }
             }
          }
       }

    // Imprime la matriz ordenada:
    
    cout<<"   Matriz ordenada de menor a mayor: \n\n";
    
    for(int i=0; i<f; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<< "\t" << matriz[i][j];
        }
        cout<< "\n\n";
    }
    
    cout<< "\n";
    
    system ("pause");
    return 0;

}
