#include <iostream>
using namespace std;

int main()
{
	double creditos;
	
	cout << "Introduzca los creditos alcanzados por el estudiante: ";
	cin >> creditos;
	
	if(creditos < 32)
	   cout << "El alumno esta en el primer a�o.";
	else if (creditos == 32 || creditos <= 63)
	   cout << "El alumno esta en el segundo a�o.";
	else if (creditos == 64 || creditos <= 95)
	   cout << "El alumno esta en el tercer a�o.";
	else if (creditos >= 96)
	   cout << "El alumno esta en el ultimo a�o.";
	
	return 0;
}
