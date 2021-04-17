#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int MAXNUMS;
	int cuenta;
	double num, total, promedio;
	
	cout << "Por favor introduzca el numero total de valores de datos"
	     << "\n que se van a promediar: ";
	     
	cin >> MAXNUMS;
	
	cuenta = 1;
	total = 0;
	
	while (cuenta <= MAXNUMS)
	{
		cout << "Introduzca un numero: ";
		cin >> num;
		total = total + num;
		cuenta++;
	}
	
	cuenta--;
	promedio = total / cuenta;
	cout << "\nEl promedio de los numeros es " << promedio << endl;
	
	return 0;
}
