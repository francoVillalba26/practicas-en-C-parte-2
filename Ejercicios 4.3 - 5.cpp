#include <iostream>
using namespace std;

int main()
{
	double calif;
	
	cout << "Introduzca el valor numerico de la calificacion del examen: ";
	cin >> calif;
	
	if (calif >= 90)
	    cout << "La calificacion del examen es A.";
	else if (calif < 90 && calif >= 80)
	    cout << "La calificacion del examen es B.";
	else if (calif < 80 && calif >= 70)
	    cout << "La calificacion del examen es C.";
	else if (calif < 70 && calif >= 60)
	    cout << "La calificacion del examen es D.";
	else if (calif < 60)
	    cout << "La calificacion del examen es F.";
	
	return 0;
}
