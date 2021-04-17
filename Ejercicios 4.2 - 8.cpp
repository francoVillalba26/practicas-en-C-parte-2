#include <iostream>
using namespace std;

int main()
{
	char letra_inicia;
	
	cout << "Introduzca la letra iniciadora: ";
	cin >> letra_inicia;
	
	if(letra_inicia == 's'){
		
		cout << "Se debe usar el generador de 20 kW";
	}
	else{
		
		cout << "Se debe usar el generador de 50 kW";
	}
	
	return 0;
}
