#include <iostream>
using namespace std;

int main()
{
	float a, b, c, year;
	
	cout << "Introduzca el a�o que desea saber si es bisiesto: ";
	cin >> year;
	
	a = year/400;
	b = year/4;
	c = year/100;
	
	if (a-int(a)==0.00){
	    cout << "El a�o " << year << " es bisiesto." << endl;
    }
	else if ((b-int(b))==0.00 && c-int(c)>0.00){
	    cout << "El a�o " << year << " es bisiesto." << endl;
	}
	else{
	    cout << "El a�o " << year << " no es bisiesto." << endl;
	}
	
	return 0;
}
