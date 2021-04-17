#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int MAX_PIES = 30;
	const int INICIAL_PIES = 3;
	const int PASO_PIES = 3;
	int pies;
	double metros;
	
	cout << "PIES     METROS" << endl
	     << "----     ------" << endl;
	
	cout << setiosflags(ios::showpoint)
	     << setprecision(2);
	
	pies = INICIAL_PIES;
	while (pies <= MAX_PIES)
	{
		metros = pies/3.28;
		
		cout << setw(3) << pies 
		     << setw(11) << metros << endl;
		
		pies = pies + PASO_PIES; 
	}
	
	return 0;
}
