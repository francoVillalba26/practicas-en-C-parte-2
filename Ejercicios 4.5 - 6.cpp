#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a, b, c, disc, raiz1, raiz2, x1, xr, xi, x2r, x2i, x2;
	
	cout << "Este programa calcula las raices de una" << endl
	     << "   ecuacion cuadratica de la forma" << endl
	     << "            2" << endl
	     << "          ax + bx + c = 0" << endl
		 << "Por favor introduzca valores para a, b y c: ";
	cin >> a >> b >> c;
	
	if (a == 0.0 && b == 0.0)
	   cout << "La ecuacion es degenerada y no tiene raices." << endl;
	else if (a == 0.0)
	   cout << "La ecuacion tiene la raiz unica x = " << -c/b << endl;
	else
	{
		disc = pow(b,2.0) - 4 * a * c;
		if (disc > 0.0)
		{
			disc = sqrt(disc);
			raiz1 = (-b + disc) / (2 * a);
			raiz2 = (-b - disc) / (2 * a);
			cout << "Las dos raices reales son " << raiz1 << " y " << raiz2 << endl;
		}
		else if (disc < 0.0){
		    xr = -b/(2 *a);
			xi = sqrt(-(pow(b,2) - (4 * a * c)))/(2 * a); 
		    cout << "Ambas raices son imaginarias." << endl
		         << "Las raices son " << xr << " + " << xi << "i" << endl
		         << "Las raices son " << xr << " - " << xi << "i" << endl;
	    }
		else{
		    cout << "Ambas raices son iguales a " << -b / (2 * a) << endl;
		}
	}
	
	return 0;
}
