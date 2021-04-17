#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int year, valorMaq;
	
	const int PRECIO_MAQ = 28000;
	const int DEPRECIA = 4000;
	valorMaq = PRECIO_MAQ;
	year = 1;
	
	cout << "Año    Depreciacion    Valor al final del año    Depreciacion acumulada" << endl
	     << "---    ------------    ----------------------    ----------------------" << endl;
	
	while (valorMaq > 0 )
	{
		cout << setw(2) << year++
		     << setw(13) << DEPRECIA
		     << setw(21) << valorMaq - DEPRECIA
		     << setw(26) << PRECIO_MAQ - (valorMaq - DEPRECIA) << endl;
		     
		valorMaq = valorMaq - DEPRECIA;
	}
	
	return 0;
}
