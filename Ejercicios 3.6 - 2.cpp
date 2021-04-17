#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double x, val_func, aprox, diferencia;
	
	cout << "\nIntroduzca un valor de x: ";
	cin >> x;
	
	cout << "\n  e a la x         Aproximacion      Diferencia\n";
    cout << "-------------      ------------     -------------\n";
    
    val_func = exp(x);
    
    aprox = 1;
    diferencia = abs(val_func - aprox);
    cout << setw(10) << setiosflags(ios::showpoint) << val_func
         << setw (18) << aprox
         << setw(18) << diferencia << endl;
    
    aprox = aprox + x;
    diferencia = abs(val_func - aprox);
    cout << setw(10) << setiosflags(ios::showpoint) << val_func
         << setw (18) << aprox
         << setw(18) << diferencia << endl;
    
    aprox = aprox + pow(x,2)/2.0;
    diferencia = abs(val_func - aprox);
    cout << setw(10) << setiosflags(ios::showpoint) << val_func
         << setw (18) << aprox
         << setw(18) << diferencia << endl;
         
    aprox = aprox + pow(x,3)/6.0;
    diferencia = abs(val_func - aprox);
    cout << setw(10) << setiosflags(ios::showpoint) << val_func
         << setw (18) << aprox
         << setw(18) << diferencia << endl;
         
    return 0;
}
