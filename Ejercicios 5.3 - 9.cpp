#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double a, r, termAnt, termSerieGeom, SerieGeom;
	int cuenta, n;
	
	a = 1;
	r = 0.5;
	n = 10;
	cuenta = 1;
	termAnt = 0;
	termSerieGeom = a * pow(r,cuenta);
	SerieGeom = termAnt + termSerieGeom;
	
	cout << "Terminos de la serie geometrica" << endl
	     << "-------------------------------" << endl;
	     
	while(cuenta <= n)
	{
		termSerieGeom = a * pow(r,(cuenta - 1.0));
		SerieGeom = termAnt + termSerieGeom;
		
		cout << setw(10) << fixed << setprecision(5) << termSerieGeom << endl;
		
		termAnt = SerieGeom;
		cuenta++; 
	}
	
	cout << "\nEl valor de la serie geometrica es " << SerieGeom << endl;
	
	return 0;
}
