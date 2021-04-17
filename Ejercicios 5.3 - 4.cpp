#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double celsius, incremento, fahren, celFinal;
	int cont;
	
	cout << "Introduzca el valor de temperatura inicial en grados Celsius: ";
	cin >> celsius;
	
	cout << "Introduzca el valor de los incrementos entre valores Celsius: ";
	cin >> incremento;
	
	cout << "Introduzca el valor de temperatura final en grados Celsius: ";
	cin >> celFinal;
	
	if (celsius <= celFinal)
	{
		while(celsius <= celFinal)
		{
			fahren = ((9.0/5.0) * celsius) + 32.0;
		
		    cout << "La temperatura de " << celsius << " Celsius en Fahrenheit es "
		         << fahren << endl;
		
		    celsius = celsius + incremento;
		}
	}
	else
	{
		cout << "No se admite un valor inicial mayor que el valor final." << endl;
    }

	return 0; 
}
