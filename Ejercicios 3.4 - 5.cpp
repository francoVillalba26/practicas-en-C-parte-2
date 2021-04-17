#include <iostream>
using namespace std;

int main()
{
	float numero, suma, prom;
	
	cout << "Introduzca un numero: ";
	cin >> numero;
	suma = suma + numero;
	
	cout << "Introduzca un segundo numero: ";
	cin >> numero;
	suma = suma + numero;
	
	cout << "Introduzca un tercer numero: ";
	cin >> numero;
	suma = suma + numero;
	
	cout << "Introduzca un cuarto numero: ";
	cin >> numero;
	suma = suma + numero;
	
	prom = (suma)/4;
	
	cout << "El promedio de los cuatro numeros introducidos es " << prom;
	
	return 0;
}
