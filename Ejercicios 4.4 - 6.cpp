#include <iostream>
using namespace std;

int main()
{
	char opselect;
	float fnum, snum;
	
	cout << "Por favor introduzca dos numeros SEPARADOS ENTRE SI: ";
	cin >> fnum >> snum;
	cout << "Que desea hacer con los numeros?" << endl
	     << "--> Escriba A para sumarlos entre si." << endl
	     << "--> Escriba B para multiplicarlos entre si." << endl
	     << "--> Escriba C para dividirlos entre si." << endl
	     << "--> Escriba D para meterselos por el culo." << endl;
	cin >> opselect;
	
	switch(opselect)
	{
		case 'A':
			cout << "La suma de los numeros introducidos es " << fnum+snum << endl;
			break;
		case 'B':
			cout << "El producto de los numeros introducidos es " << fnum*snum << endl;
			break;
		case 'C':
			if (snum > 0 || snum <0){
			cout << "El cociente de los numeros introducidos es " << fnum/snum << endl;
		    }
		    else{
		    	cout << "No es posible dividir un numero por cero." << endl;
		    } 
			break;
		case 'D':
			cout << "Me temo que su culo es muy pequeno, no es posible meterle ambos numeros." << endl;
			break;
		default:
			cout << "Los datos introducidos no son correctos." << endl;
			break;
	}
	
	return 0;
}
