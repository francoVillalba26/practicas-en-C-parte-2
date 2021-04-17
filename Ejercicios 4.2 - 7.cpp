#include <iostream>
using namespace std;

int main()
{
	char inicia_letra;
	
	cout << "Introduzca la letra de inicializacion.";
	cin >> inicia_letra;
	
	if(inicia_letra == 'g'){
	
	cout << "PROCEDER CON EL DESPEGUE";
	}
	else{
	
	cout << "CANCELAR EL DESPEGUE";
	}
	
	return 0;
}
