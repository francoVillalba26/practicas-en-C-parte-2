#include <iostream>
using namespace std;

int main()
{
	int codigo;
	
	cout << "Introduzca un numero del 1 al 4 para conocer el fabricante de la unidad de disco: ";
	cin >> codigo;
	
	switch(codigo)
	{
	case 1:
		cout << "El fabricante de la unidad es 3M Corporation." << endl;
		break;
	case 2:
		cout << "El fabricante de la unidad es Maxell Corporation." << endl;
		break;
	case 3:
		cout << "El fabricante de la unidad es Sony Corporation." << endl;
		break;
	case 4:
		cout << "El fabricante de la unidad es Verbatim Corporation." << endl;
		break;
	default:
		cout << "Los datos ingresados no son validos." << endl;
		break;
    }
    
    return 0;
}
