#include <iostream>
#include <iomanip>
using namespace std;

// un programa para convertir Celsius en Fahrenheit
int main()
{
 const int MAX_CELSIUS = 60;
 const int VAL_INICIAL = -10;
 const int SIZE_PASO = 10;
 int celsius;
 double fahren;
 
 cout << "GRADOS     GRADOS\n"
      << "CELSIUS  FAHRENHEIT\n"
      << "-------  ----------\n";
 
 celsius = VAL_INICIAL;
 
  // establecer los formatos de salida solo para numeros en punto flotante
 cout << setiosflags(ios::showpoint)
      << setprecision(2);
 
 while (celsius <= MAX_CELSIUS)
 {
 	fahren = (9.0/5.0) * celsius + 32.0;
 	cout << setw(4) << celsius << fixed
 	     << setw(13) << fahren << endl;
 	celsius = celsius + SIZE_PASO;
 }
 
 return 0;
}
