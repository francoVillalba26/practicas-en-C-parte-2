#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int galon;
	float litro;
	
	galon = 10;
	
	cout << "Galones   Litros" << endl
		 << "-------   ------" << endl;
	
	cout << setiosflags(ios::showpoint)
	     << setprecision(2);
		     
	while (galon <= 20)
	{
		litro = galon * 3.768;
		cout << setw(5) << galon << fixed
		     << setw(11) << litro << endl;
		
		galon = galon++;	     
	}
	
	return 0;
}
