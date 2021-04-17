
#include <iostream>
using namespace std;

int carta1 (float num)
{
	if (num == 13 || num == 12 || num == 11)
	{
		return 10;
	}
	else if (num == 1)
	{
		return 11;
	}
	else
	{
		return num;
	}
}

int carta2 (float num)
{
	if (num == 13 || num == 12 || num == 11)
	{
		return 10;
	}
	else if (num == 1)
	{
		return 11;
	}
	else
	{
		return num;
	}
}

int carta3 (float num)
{
	if (num == 13 || num == 12 || num == 11)
	{
		return 10;
	}
	else if (num == 1)
	{
		return 11;
	}
	else
	{
		return num;
	}
}  

int main()
{
	float num1, num2, num3, suma1, suma2;
	
	cout << "Ingresa las cartas que tenes: ";
	cin >> num1 >> num2 >> num3;
	
	suma1 = num1 + num2 + num3;

	if (suma1 - int(suma1) == 0.00 && num1 <= 13 && num1 > 0 && num2 <= 13 && num2 > 0 && num3 <= 13 && num3 > 0)
	{
		suma2 = carta1(num1) + carta2(num2) + carta3(num3);
		
		if(suma2 > 21 && num1 == 1 && num2 == 1 && num3 == 1)
		{
			carta1(num1) == 1;
			carta2(num2) == 1;
			suma2 = 1 + 1 + carta3(num3);
			
			cout << "El valor de la primera carta ingresada es " << 1 << endl
			     << "El valor de la segunda carta ingresada es " << 1 << endl
			     << "El valor de la tercera carta ingresada es " << carta3(num3) << endl
			     << "La suma de todas las cartas ingresadas es " << suma2 << endl;
		}
		else if(suma2 > 21 && num1 == 1 )
		{
			carta1(num1) == 1;
			suma2 = 1 + carta2(num2) + carta3(num3);
			
			cout << "El valor de la primera carta ingresada es " << 1 << endl
			     << "El valor de la segunda carta ingresada es " << carta2(num2) << endl
			     << "El valor de la tercera carta ingresada es " << carta3(num3) << endl
			     << "La suma de todas las cartas ingresadas es " << suma2 << endl;	
		}
		else if(suma2 > 21 && num2 == 1 )
		{
			carta2(num2) == 1;
			suma2 = carta1(num1) + 1 + carta3(num3);
			
			cout << "El valor de la primera carta ingresada es " << carta1(num1) << endl
			     << "El valor de la segunda carta ingresada es " << 1 << endl
			     << "El valor de la tercera carta ingresada es " << carta3(num3) << endl
			     << "La suma de todas las cartas ingresadas es " << suma2 << endl;	
		}
		else if(suma2 > 21 && num3 == 1 )
		{
			carta3(num3) == 1;
			suma2 = carta1(num1) + carta2(num2) + 1;
			
			cout << "El valor de la primera carta ingresada es " << carta1(num1) << endl
			     << "El valor de la segunda carta ingresada es " << carta2(num2) << endl
			     << "El valor de la tercera carta ingresada es " << 1 << endl
			     << "La suma de todas las cartas ingresadas es " << suma2 << endl;	
		}
		else if(suma2 > 21 && num1 == 1 && num2 == 1 )
		{
			carta1(num1) == 1;
			carta2(num2) == 1;
			suma2 = 1 + 1 + carta3(num3);
			
			cout << "El valor de la primera carta ingresada es " << 1 << endl
			     << "El valor de la segunda carta ingresada es " << 1 << endl
			     << "El valor de la tercera carta ingresada es " << carta3(num3) << endl
			     << "La suma de todas las cartas ingresadas es " << suma2 << endl;	
		}
		else if(suma2 > 21 && num1 == 1 && num3 == 1 )
		{
			carta1(num1) == 1;
			carta3(num3) == 1;
			suma2 = 1 + carta2(num2) + 1;
			
			cout << "El valor de la primera carta ingresada es " << 1 << endl
			     << "El valor de la segunda carta ingresada es " << carta2(num2) << endl
			     << "El valor de la tercera carta ingresada es " << 1 << endl
			     << "La suma de todas las cartas ingresadas es " << suma2 << endl;	
		}
		else if(suma2 > 21 && num2 == 1 && num3 == 1 )
		{
			carta2(num2) == 1;
			carta3(num3) == 1;
			suma2 = carta1(num1) + 1 + 1;
			
			cout << "El valor de la primera carta ingresada es " << carta1(num1) << endl
			     << "El valor de la segunda carta ingresada es " << 1 << endl
			     << "El valor de la tercera carta ingresada es " << 1 << endl
			     << "La suma de todas las cartas ingresadas es " << suma2 << endl;	
		}
		else 
		{
			cout << "El valor de la primera carta ingresada es " << carta1(num1) << endl
			     << "El valor de la segunda carta ingresada es " << carta2(num2) << endl
			     << "El valor de la tercera carta ingresada es " << carta3(num3) << endl
			     << "La suma de todas las cartas ingresadas es " << suma2 << endl;
		}
    }
    else
    {
    	cout << "Los datos introducidos son invalidos." << endl
    	     << "No se permiten valores decimales." << endl
    	     << "No se permiten valores mayores a 13." << endl
    	     << "No se permiten valores negativos." << endl;
	}
	return 0;
}
