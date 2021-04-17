#include <iostream>
using namespace std;

int main()
{
	double tiempo, voltaje;
	
	cout << "Introduzca el tiempo de variacion de la onda en segundos: ";
	cin >> tiempo;
	
	if(tiempo<2){
		voltaje = 0;
		cout << "El voltaje de la onda es " << voltaje << " Volts" << endl;
	}
	else{
		voltaje = 3.0;
		cout << "El voltaje de la onda es " << voltaje << " Volts" << endl;
	}
	
	return 0;
}
