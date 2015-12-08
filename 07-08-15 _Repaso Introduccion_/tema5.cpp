#include <cstdlib>
#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
#include <vector>
using namespace std;

int main(int argc, char** argv) {
	
	int loop = 0, mayus = 0, minus = 0;
	char nombre;
	
	do {
		
    	cout<<"Ingrese el nombre: ";
    	cin>>("%c",&nombre);
    
    	if (nombre >= 'a' && nombre <= 'z'){
       		cout<<"Es minuscula " << endl;
        	loop = loop + 1;;}
    	else if (nombre >= 'A' && nombre <= 'Z'){
        	cout<<"Es mayuscula " << endl;
        	mayus = mayus + 1;
        	loop = loop + 1;}
    	else {
        	cout<<"Porfavor utilice letras." << endl;}

	} while (loop < 12);
	
	cout<< 12 - mayus << " fueron ingresados con minusculas y " << endl;
	cout<< mayus << " fueron ingresados con mayusculas." << endl;
	
	system("pause");
	return 0;
}
