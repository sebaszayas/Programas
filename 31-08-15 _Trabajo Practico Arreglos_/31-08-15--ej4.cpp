#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <time.h>
#include <vector>
#include <cmath>
#include <ctype.h>

using namespace std;

int main() {
	
	int v[50], aux, aux2;
	
	for(int a = 0; a < 51; a++)
	{
		aux2 = aux2 + 1;
		cout<< "ingrese la variable " << a << ": ";
		cin>> aux;
		if (aux == 99999)
		{
			a = 50;
			aux2 = aux2 - 1;
		} else {
			if (aux > 0)
			{
				v[a] = aux;
			} else {
				aux = aux * -1;
				v[a] = aux * -1;
				aux2 = aux2 - 1;
			}
		}
	}
	
	aux2 = aux2 + 1;
	
	for(int a = 0; a < aux2; a++)
	{
		if (v[a] > 0)
		{
			cout<< v[a] << ", ";
		}
	}
	
	return 0;
	system("pause");
}
