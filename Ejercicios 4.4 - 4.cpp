#include <iostream>
using namespace std;

int main()
{
	char codigo;
	
	cout << "Introduzca un codigo de especificacion: ";
	cin >> codigo;
	
	switch(codigo)
	{
		case 'S':
			cout << "El elemento tiene grado de exploracion espacial." << endl;
			break;
		case 'M':
			cout << "El elemento tiene grado militar." << endl;
			break;
		case 'C':
			cout << "El elemento tiene grado comercial." << endl;
			break;
		case 'T':
			cout << "El elemento tiene grado de juguete." << endl;
			break;
		default:
			 cout << "Se ha introducido un codigo invalido." << endl;
			 break;	
	}
	   
	return 0;
}
