#include <iostream>
using namespace std;

int main()
{
	double angulo;
	
	cout << "Introduzca el angulo correspondiente: ";
	cin >> angulo;
	
	if (angulo < 90)
	    cout << "El angulo introducido es agudo." << endl;
	else if (angulo == 90)
	    cout << "El angulo introducido es recto." << endl;
	else 
	    cout << "El angulo introducido es obtuso." << endl;
			    
	return 0;
}
