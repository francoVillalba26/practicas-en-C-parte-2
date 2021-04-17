#include <iostream>
using namespace std;

int main()
{
	float E, R1, R2, V2, P2, I;
	
	cout << "Introduzca el valor de R1: ";
	cin >> R1;
	
	cout << "Introduzca el valor de R2: ";
	cin >> R2;
	
	cout << "Introduzca el valor de la tension E: ";
	cin >> E;
	
	I = E/(R1+R2);
	V2 = I*R2;
	P2 = I*V2;
	
	cout << "El valor de la tension en la resistencia 2 es " << V2 << " Volts." << endl
	     << "El valor de la potencia disipada por la resistencia 2 es " << P2 << " Watts." << endl;
	
	return 0;
}
