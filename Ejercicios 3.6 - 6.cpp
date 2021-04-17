#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double x, nu, sigma, y, a, b, c;
	
	const double PI = 3.1416;
	const double e = 2.7183;
	
	cout << "Introduzca el valor de x: ";
	cin >> x;
	
	cout << "Introduzca el valor medio: ";
	cin >> nu;
	
	cout << "Introduzca el valor de la desviacion estandar: ";
	cin >> sigma;
	
	c = (x-nu)/sigma;
	a = (-0.5)*pow(c,2.0);
	b = sqrt(2.0*PI);
	y = (1.0/sigma*b)*pow(e,a);
	
	cout << "El valor de y utilizando la ecuacion de la curva normal es " 
	     << setw (4) << setiosflags(ios::showpoint) << y << endl;
	
	return 0;
}
