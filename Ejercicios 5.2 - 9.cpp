#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	/* 
	El ciclo tiene dos elementos cambiantes:
	a) termAdicion: Es el último termino que se va 
	   sumando a la serie del numero Euler en 
	   cada nuevo ciclo. Este último termino de
	   cada serie es la diferencia entre dos
	   series consecutivas (hacer la demostracion).
	b) numMulti: Es el número que se va 
	   multiplicando al denominador del último 
	   termino en cada nuevo ciclo. 
	*/
	      
	const double DIF_EULER = 10e-9;
	double difEuler, cuenta, termAdicion, numMulti;
	double EulerAnt, EulerPost;
	
	cuenta = 0;                                               // Este es el contador utilizado para renovar el valor de la serie en cada ciclo.
	numMulti = 1;                                             
	termAdicion = 1.0/(numMulti * cuenta++);
	difEuler = termAdicion;
	EulerAnt = 1;                                             // Este es el primer valor de la serie que se evalua.
	EulerPost = EulerAnt + termAdicion;                       // Este es el valor inmediatemente posterior al primer valor.
	/* 
		 La diferencia entre el valor posterior y el valor anterior (o primer valor)
		 nos da como resultado la diferencia buscada. Se puede demostrar que la 
		 diferencia entre valor posterior menos valor anterior de la serie de Euler
		 es igual al ultimo termino de la serie posterior, de ahí que en este 
		 programa se encuentre primero el valor del ultimo termino y despues se lo
		 sume al valor anterior para obtener el valor posterior. Se hace de esta
		 forma porque a mi (el programador) se me hace mas facil hacer el ciclo.
	*/                                               
	
	cout << "Euler anterior     Euler posterior     Diferencia" << endl
	     << "--------------     ---------------     ----------" << endl;
	
	while(difEuler > DIF_EULER)
	{
		termAdicion =  1.0/(numMulti * cuenta);
		difEuler = termAdicion;
		EulerPost = EulerAnt + termAdicion;
		
		cout << setw(13) << fixed << setprecision(9) << EulerAnt;
		cout << setw (19) << fixed << setprecision(9) << EulerPost;
		cout << setw(17) << scientific << setprecision(2) << difEuler << endl;
		
		EulerAnt = EulerPost;
		numMulti = numMulti * cuenta;                                        /* Cuando termina un ciclo el denominador del ultimo termino
		                                                                          debe tomar el ultimo valor antes de empezar el ciclo siguiente.*/
		cuenta++;	
	}
	
	return 0;
}
