#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float a, b, c, x, pol;
	
	cout << "Introduzca el coeficiente del termino x al cuadrado: ";
	cin >> a;
	
	cout << "Introduzca el coeficiente del termino x: ";
	cin >> b;
	
	cout << "Introduzca el coeficiente constante: ";
	cin >> c;
	
	cout << "Introduzca el valor del termino x: ";
	cin >> x;
	
	pol = (pow(x,2)*a)+(b*x)+c;
	
	cout << "El valor del polinomio introducido es: " << pol << endl;
	
	return 0;
}
