#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float e, t, B;
	
	e = 2.71828;
	
	cout << "Introduzca el tiempo de cultivo en horas: ";
	cin >> t;
	
	B = 300000*pow(e,(-0.032*t));
	
	cout << "El numero de bacterias en un cultivo para un tiempo de " << t << " horas es " << B << endl;
	
	return 0;	
}
