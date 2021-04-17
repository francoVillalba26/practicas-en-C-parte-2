#include <iostream>
using namespace std;

int main()
{
	float year_model, peso_auto;
	
	cout << "Introduzca el año del modelo del auto: ";
	cin >> year_model;
	
	if(year_model-int(year_model)==0.00)
	{
		cout << "Introduzca el peso del auto: ";
		cin >> peso_auto;
		
		if(year_model <= 1970 && peso_auto < 2700)
		   cout << "La clase del auto segun el peso del auto es 1." << endl
		        << "La tarifa de registro para esta clase es 16.50 dolares." << endl;
		else if (year_model <= 1970 && peso_auto <= 3800)
		   cout << "La clase del auto segun el peso del auto es 2." << endl
		        << "La tarifa de registro para esta clase es 25.50 dolares." << endl;
		else if (year_model <= 1970 && peso_auto > 3800)
		   cout << "La clase del auto segun el peso del auto es 3." << endl
		        << "La tarifa de registro para esta clase es 46.50 dolares." << endl;	
		else if(year_model <= 1979 && peso_auto < 2700)
		   cout << "La clase del auto segun el peso del auto es 4." << endl
		        << "La tarifa de registro para esta clase es 27.00 dolares." << endl;
		else if (year_model <= 1979 && peso_auto <= 3800)
		   cout << "La clase del auto segun el peso del auto es 5." << endl
		        << "La tarifa de registro para esta clase es 30.50 dolares." << endl;
		else if (year_model <= 1979 && peso_auto > 3800)
		   cout << "La clase del auto segun el peso del auto es 6." << endl
		        << "La tarifa de registro para esta clase es 52.50 dolares." << endl;
		else if(year_model >= 1980 && peso_auto < 3500)
		   cout << "La clase del auto segun el peso del auto es 7." << endl
		        << "La tarifa de registro para esta clase es 19.50 dolares." << endl;
		else if (year_model >= 1980 && peso_auto >= 3500)
		   cout << "La clase del auto segun el peso del auto es 8." << endl
		        << "La tarifa de registro para esta clase es 52.50 dolares." << endl;
		
	}
	else
	{
		cout << "No se puede introducir años con decimales." << endl;
	}
	
	return 0;
}
