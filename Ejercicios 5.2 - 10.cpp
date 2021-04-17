#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	const double DIF_SENO = 1e-6;
	const double ANG_GRADOS = 30;
	
	double x, numMulti, termSerieSeno, serieSenoAnt, serieSeno, cambioSigno;
	double difSeno;
	int cont, n;
	
	x = (3.1416/180.0) * ANG_GRADOS;
	cont = 1;                                  // Contador para realizar el factoral del denominador
	
	n = 1;                                     /* Contador para realizar el cambio de signo de los terminos
	                                              de la serie en cada ciclo. */
	                                              
	numMulti = 1;                              /* Variable que memoriza el estado anterior del factorial
	                                              en cada ciclo */
	                                              
	cambioSigno = pow((-1.0),(cont + 1.0));    /* Variable que se utiliza para cambiar el signo de los
	                                              terminos que se agregan a la serie en cada ciclo. */
	                                              
	termSerieSeno = (cambioSigno) * (pow(x,cont))/(numMulti * cont);   
	serieSenoAnt = 0;
	serieSeno = serieSenoAnt + termSerieSeno;
	difSeno = abs(sin(x) - serieSeno);
	
	cout << "Seno de " << ANG_GRADOS << "     Serie de Seno de " << ANG_GRADOS << "     Diferencia" << endl
	     << "-----------     --------------------     ----------" << endl;
	
	while (difSeno > DIF_SENO)
	{
		termSerieSeno = (pow(x,cont))/(numMulti * cont);
	    serieSeno = serieSenoAnt + (cambioSigno * termSerieSeno);
	    		   
	    if(cont % 2 == 0)                     // Si el contador es par
	    {        
	    	numMulti = numMulti * cont;
			cont++;
	    }
		else{
			difSeno = abs(sin(x) - serieSeno);
			serieSenoAnt = serieSeno;
	        numMulti = numMulti * cont;
	        
			cout << setw(9) << fixed << setprecision(6) << sin(x)
	             << setw(21) << fixed << setprecision(7) << serieSeno 
				 << setw(20) << fixed << setprecision(7) << difSeno << endl;
	             
			cont++;
			n++;
	        cambioSigno = pow((-1.0),(n + 1.0));
		}
	}
	
	return 0;
}
