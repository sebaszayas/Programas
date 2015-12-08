#include <stdio.h>
#include <stdlib.h> //incluye srand() y rand()
#include <conio.h>
#include <time.h> //incluye time()
 
char mat[4][4]; //tamaño de la matriz
char letras[]="abcdefghijklmn\xA4opqrstuvwxyz";
int numdeletras=sizeof(letras)/sizeof(letras[0])-1;
 
int main()
{
    srand(time(0));//numeros Aleatorios en funcion del tiempo
    for (int i=0;i<4;i++)//para desplazarse por las columnas
    {
        for (int j=0;j<4;j++)//para desplazarse por las filas
        {
            mat[i][j]=letras[rand()%numdeletras];//Agrega numero aleatorio a la posicion ij de la matriz
            printf("\t%c",mat[i][j]);//imprime elemento de la matriz en pantalla
        }
      printf("\n\n");//para dejar espacios entre filas.
    }
   getche();
}
