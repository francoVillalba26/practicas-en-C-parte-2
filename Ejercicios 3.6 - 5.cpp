#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double x, nu, sigma, z;
	
	cout << "Introduzca el valor de x: ";
	cin >> x;
	
	cout << "Introduzca el valor medio: ";
	cin >> nu;
	
	cout << "Introduzca el valor de la desviacion estandar: ";
	cin >> sigma;
	
	z = (x-nu)/sigma;
	
	cout << "El valor de la desviacion normal estandar es " << z << endl;
	
	return 0;
}
