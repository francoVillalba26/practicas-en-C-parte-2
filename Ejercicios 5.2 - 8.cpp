#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	const int TEMP_INICIAL = 0;
	const int DIF_TEMP = 4;
	const int TEMP_PASO = 2;
	float celAprox, celExact, celDif;
	int fahren;
	
	cout << "Fahrenheit    Celsius exacto    Celsius aprox    Diferencia" << endl
	     << "----------    --------------    -------------    ----------" << endl;
	
	cout << setiosflags(ios::showpoint)
	     << setprecision(2);
	
	fahren = TEMP_INICIAL;
	celExact = (5.0/9.0)*(fahren - 32);
	celAprox = (fahren - 30)/2;
	celDif = abs(abs(celExact) - abs(celAprox));
	
	while(celDif < DIF_TEMP)
	{
		celExact = (5.0/9.0)*(fahren - 32);
		celAprox = (fahren - 30)/2;
		celDif = abs(abs(celExact) - abs(celAprox));
		cout << setw(6) << fahren
		     << setw(17) << celExact
		     << setw(18) << celAprox
		     << setw(15) << celDif << endl;
		     
		fahren = fahren + TEMP_PASO;
	}
	
	return 0;
}
