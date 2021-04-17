#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double f, aumentoEtapa1, aumentoEtapa2, aumentoEtapa3;
	
	cout << "Introduzca la frecuencia del amplificador de voltaje: ";
	cin >> f;
	
	aumentoEtapa1 = 23/sqrt((pow(2.3,2.0)+pow((0.044*f),2.0)));
	aumentoEtapa2 = 12/sqrt((pow(6.7,2.0)+pow((0.34*f),2.0)));
	aumentoEtapa3 = 17/sqrt((pow(1.9,2.0)+pow((0.45*f),2.0)));
	
	cout << "El aumento de voltaje del amplificador de tres etapas es " << setw(8)
	     << fixed << setprecision(6) << (aumentoEtapa1*aumentoEtapa2*aumentoEtapa3);
	
	return 0;	
}
