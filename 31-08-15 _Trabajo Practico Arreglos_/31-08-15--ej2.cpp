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
	
	int vector_A [20];
	int vector_B [20];
	int vector_C [20];
	
	cout<<"Ingrese las variables de A: \n" << endl;
	
	for (int a = 0; a < 21; a++)
	{
		cout<<"ingrese la variable "<< a << ": ";
		cin>>vector_A[a];
	}
	
	cout<< endl;
	cout<<"Ingrese las variables de B: \n" << endl;
	
	for (int a = 0; a < 21; a++)
	{
		cout<<"ingrese la variable "<< a << ": ";
		cin>>vector_B[a];
	}
	
	int aux = vector_B[20];
	
	for (int a = 0; a < 20; a++)
	{
		vector_C[a] = vector_A[20 - a] + vector_B[a];
	}
	
	vector_C[20] = vector_A[0] + aux;
	cout<< endl;
	cout<< "Variable C:\n" << endl;
	
	for (int a = 0; a < 21; a++)
	{
		cout<< a;
		cout<< " = ";
		cout<< vector_C[a] << endl;
	}
	
	cout<< endl;
	
	return 0;
	system("pause");
	
}
