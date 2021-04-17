#include <iostream>
using namespace std;

int main()
{
	float Cels, Fahr, a;
	
	cout << "Introduzca la temperatura en grados Celsius: ";
	cin >> Cels; 
	a = (9.0/5.0);
	Fahr = (a*Cels)+32;
	
	cout << "Para una temperatura de " << Cels << " °C su equivalente en grados Fahrenheit es " << Fahr
	     << " °F.";
	
	return 0; 
}
