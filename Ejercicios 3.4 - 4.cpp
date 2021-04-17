#include <iostream>
using namespace std;

int main()
{
	float millas, galones, millasPorGalon;
	
	cout << "Introduzca las millas recorridas: ";
	cin >> millas;
	
	cout << "Introduzca los galones de gasolina consumidos: ";
	cin >> galones;
	
	millasPorGalon = millas/galones;
	
	cout << "Las millas por galon consumidos son " << millasPorGalon << endl;
	
	return 0;
	
}
