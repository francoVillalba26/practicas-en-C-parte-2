#include <iostream>
using namespace std;

int main()
{
	char codigo;
	
	cout << "Introduzca un codigo de especificacion: ";
	cin >> codigo;
	
	if(codigo == 'S' || 's')
	   cout << "El elemento tiene grado de exploracion espacial.";
	else if (codigo == 'M' || 'm')
	   cout << "El elemento tiene grado militar.";
	else if (codigo == 'C' || 'c')
	   cout << "El elemento tiene grado comercial.";
	else if (codigo == 'T' || 't')
	   cout << "El elemento tiene grado de juguete.";
	else
	   cout << "Se ha introducido un codigo invalido.";
	   
	return 0;
}
