#include <iostream>
using namespace std;

int main()
{
	double x, y, z, p;
	
	cout << "Introduzca un valor para x: ";
	cin >> x;
	
	cout << "Introduzca un valor para y: ";
	cin >> y;
	
	cout << "Introduzca un valor para z: ";
	cin >> z;
	
	if(x>y && z<20.0)
	{
		cout << "Introduzca un valor para p: ";
		cin >> p;
		
		cout << "Este mensaje confirma la lecura de la entrada p siendo la misma igual a " << p << endl;
	}
	else
	{
		cout << "Este mensaje confirma que no se cumplen las siguientes condiciones: " << endl
		     << "--> x no es mayor a y." << endl
		     << "--> z no es menor a 20." << endl
		     << "Alguna de estas condiciones no se cumple" << endl;
	}
	
	return 0;
}
