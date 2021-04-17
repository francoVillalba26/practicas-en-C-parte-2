#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int a, d, n, suma, cuenta, termAnt, termSerieArit, SerieArit;
	
	a = 1;
	d = 3;
	n = 100;
	termAnt = 0;
	cuenta = 1;
	
	cout << "Terminos de la serie aritmetica" << endl
	     << "-------------------------------" << endl;
	
	
	while (cuenta <= n)
	{
		termSerieArit = a + ((cuenta - 1) * d);
		SerieArit = termAnt + termSerieArit;
		
		cout << setw(4) << fixed << setprecision(4) << termSerieArit << endl;
		
		termAnt = termAnt + termSerieArit;
		cuenta++;
	}
	
	cout << "\nEl valor de la suma de la serie aritmetica es " << SerieArit << endl;
	 
	return 0;
}
