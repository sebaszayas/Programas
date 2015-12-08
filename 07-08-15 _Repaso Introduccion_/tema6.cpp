#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <time.h>
#include <vector>
#include <cmath>
using namespace std;

int main(){
	
  int n;
  cout<<"Escriba un numero: ";
  cin>>n;
  
  if(n % 2 == 0){
  	cout<< " El numero es Par, su raiz cuadrada es: ";
  	cout<< sqrt(n) << endl;
	}
	
   else{
   	cout<<"El numero es Impar, su cuadrado es: ";
   	cout<< n * n << endl;}
     
	system("pause");
	return 0;
}
