#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int hora, dist;
	
	const int VEL_PROM = 55;
	const int VIAJE_DURA = 4;
	
	cout << "TIEMPO    VELOCIDAD PROMEDIO    DISTANCIA" << endl
	     << "------    ------------------    ---------" << endl; 
	
	hora = 1;
	while (hora <= VIAJE_DURA)
	{
		dist = VEL_PROM * hora;
		cout << setw(3) << hora
		     << setw(17) << VEL_PROM
		     << setw(18) << dist << endl;
		
		hora = hora++;
	}
	
	return 0;
}
