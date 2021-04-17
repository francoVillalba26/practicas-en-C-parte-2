#include <iostream>
using namespace std;

int main()
{
	double num1, num2, producto;
	
	cout << "Por favor introduzca un numero: ";
	cin >> num1;
	cout << "Por favor introduzca otro numero: ";
	cin >> num2;
	producto = num1*num2;
	cout << num1 << " por " << num2 << " es " << producto << endl;
	
	return 0;
}
