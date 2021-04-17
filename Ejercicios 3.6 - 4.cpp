#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double PI;
	
	PI = 4-(4.0/3.0);
	cout << "El valor de pi utilizando dos terminos de la serie es " << PI << endl;
	
	PI = PI + (4.0/5.0);
	cout << "El valor de pi utilizando tres terminos de la serie es " << PI << endl;
	
	PI = PI - (4.0/7.0);
	cout << "El valor de pi utilizando cuatro terminos de la serie es " << PI << endl;
	
	return 0;	
}
