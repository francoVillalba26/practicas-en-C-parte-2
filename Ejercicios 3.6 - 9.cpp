#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	float perimetro, volumen, largo, ancho, profProm, AreaSupSub, largoPorAncho, largoMasAncho;
	
	cout << "Introduzca el largo de la alberca: ";
	cin >> largo;
	
	cout << "Introduzca el ancho de la alberca: ";
	cin >> ancho;

	cout << "Introduzca el valor de la profundidad promedio de la alberca: ";
	cin >> profProm;
	
	largoPorAncho = largo * ancho;
	largoMasAncho = largo + ancho;
	
	perimetro = 2*(largoMasAncho);
	volumen = largoPorAncho*profProm;
	AreaSupSub = (2*largoMasAncho*profProm)+largoPorAncho;
	
	cout << "El perimetro de la alberca es: " << perimetro << endl
	     << "El volumen de la alberca es: " << volumen << endl
	     << "El area de superficie subterranea de la alberca es: " << AreaSupSub << endl;
	
	return 0;
}
