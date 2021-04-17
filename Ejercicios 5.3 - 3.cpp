#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double celsius, incremento, fahren;
	int numConv, cont;
	
	cout << "Introduzca el valor de temperatura inicial en grados Celsius: ";
	cin >> celsius;
	
	cout << "Introduzca el valor de los incrementos entre valores Celsius: ";
	cin >> incremento;
	
	cout << "Introduzca el numero de conversiones que se haran: ";
	cin >> numConv;
	
	cont = 1;
	
	while(cont <= numConv)
	{
		fahren = ((9.0/5.0) * celsius) + 32.0;
		
		cout << "La temperatura de " << celsius << " Celsius en Fahrenheit es "
		     << fahren << endl;
		
		celsius = celsius + incremento;
		cont++;
	}  
	
	return 0; 
}
