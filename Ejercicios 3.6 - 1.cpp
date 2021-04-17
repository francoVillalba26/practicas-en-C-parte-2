#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double hidronio, nivelpH;
	
	cout << "Introduzca la concentracion de iones hidronios: ";
	cin >> hidronio;
	nivelpH = -log10(hidronio);
	cout << "El nivel de pH es " << nivelpH << endl;
	
	return 0;
}
