#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float E, R, e, t, tau, i, a;
	
	cout << "Introduzca el voltaje de la bateria: ";
	cin >> E;
	
	cout << "Introduzca la resistencia del circuito: ";
	cin >> R;
	
	cout << "Introduzca el tiempo de cierre del interruptor: ";
	cin >> t;
	
	cout << "Introduzca la constante de tiempo del circuito: ";
	cin >> tau;
	
	e = 2.7183;
	a = (-t/tau);
	i = (E/R)*pow(e,a);
	
	cout << "La coriente que fluye a traves del circuito es: " << i << " A." << endl;
	
	return 0;
}
