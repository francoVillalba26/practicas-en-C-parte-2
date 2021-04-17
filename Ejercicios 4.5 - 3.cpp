#include <iostream>
using namespace std;

int main()
{
	float angulo;
	
	cout << "Introduzca el angulo de la linea respecto del eje x positivo: ";
	cin >> angulo;
	
	if (angulo == 0)
	    cout << "La linea se encuentra en el eje x positivo." << endl;
	else if (angulo < 90)
	    cout << "La linea se encuentra en el primer cuadrante." << endl;
	else if (angulo == 90)
	    cout << "La linea se encuentra en el eje y positivo." << endl;
	else if (angulo < 180)
	    cout << "La linea se encuentra en el segundo cuadrante." << endl;
	else if (angulo == 180)
	    cout << "La linea se encuentra en el eje x negativo." << endl;
	else if (angulo < 270)
	    cout << "La linea se encuentra en el tercer cuadrante." << endl;
	else if (angulo == 270)
	    cout << "La linea se encuentra en el eje y negativo." << endl;
	else if (angulo < 360)
	    cout << "La linea se encuentra en el cuarto cuadrante." << endl;
	else if (angulo == 360)
	    cout << "La linea se encuentra en el eje x positivo." << endl;
	    
	return 0;	
}
