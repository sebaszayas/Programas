#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <time.h>
#include <vector>
#include <cmath>
#include <ctype.h>
#include <conio.h>

// Lee una cadena y la muestra al revez.

int main(int argc, char *argv[])
{
	int indice,x;
    char frase[50];
    
    printf("Introduzca una frase: ");
    gets(frase);
    
    for(x = 0;x < 50;x++)
    {
      if (frase[x]=='\0')
      {
       indice=x;
       break;
      }
    }
    
    printf("La frase al reves es: \n\n");
    
    for(x = indice-1;x >=0;x--)
    {
      printf("%c",frase[x]);
    }
   
    printf("\n\n");
   
    system("PAUSE");     
    return 0;
}
