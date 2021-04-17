#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float temp, Fahren, Celsius;
	char tipo_temp;
	
	cout << "Introduzca la temperatura en grados Celsius o Fahrenheit: ";
	cin >> temp >> tipo_temp;
	
	cout << setiosflags(ios::fixed)
	     << setiosflags(ios::showpoint)
	     << setprecision(2);
	
    if (tipo_temp == 'c' || tipo_temp == 'C'){
    
	    Fahren = (9.0/5.0)*temp+32.0;
	    cout << "La temperatura de " << temp << " en grados Celsius es " << Fahren << " en grados Fahrenheit.";
    }
	else if (tipo_temp == 'f' || tipo_temp == 'F'){
	    Celsius =(5.0/9.0)*(temp-32.0);
	    cout << "La temperatura de " << temp << " en grados Fahrenheit es " << Fahren << " en grados Celsius.";
    }
	else{
	    cout << "La temperatura introducida es invalida.";
    }
    
	return 0;
}
