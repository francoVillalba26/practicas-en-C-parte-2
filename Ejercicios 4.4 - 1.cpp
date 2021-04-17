#include <iostream>
using namespace std;

int main()
{
	char let_calif;
	
	cout << "Introduzca uno de los siguiente comandos segun corresponda:" << endl
	     << "--> A para ver la calificacion correspondiente." << endl
	     << "--> B para ver la calificacion correspondiente." << endl
	     << "--> C para ver la calificacion correspondiente." << endl
	     << "--> D para ver la calificacion correspondiente." << endl;
	cin >> let_calif;
	
	switch (let_calif)
	{
		case 'A':
			cout << "La calificacion numerica esta entre 90 y 100\n";
			break;
		case 'B':
			cout << "La calificacion numerica esta entre 80 y 89.9\n";
			break;
		case 'C':
			cout << "La calificacion numerica esta entre 70 y 79.9\n";
			break;
		case 'D':
			cout << "Como va a explicar esta\n";
			break;
		default:
			cout << "Por supuesto que no tuve nada que ver con mi calificacion.\n"
			     << "Debe ser culpa del profesor.\n";
			break;
	}
	
	return 0;
}
