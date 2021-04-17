#include <iostream>
using namespace std;

int main()
{
	float mes, dia;
	
	cout << "Introduzca un mes (use 1 para Ene, etc.): ";
	cin >> mes;
	
	if (mes - int(mes) == 0.00)
	{
	
	cout << "Introduzca un dia del mes: ";
    cin >> dia;
	
	switch(int(mes))
	{
		case 1:
			if (dia <= 31 && dia > 0){
		 	    cout << "La fecha introducida es: " << dia << " de Enero." << endl;
		    }
		    else{
			    cout << "EL dia introducido es invalido. Enero solo tiene 31 dias." << endl;		    
		    }
		    break;
		case 2:
			if (dia > 0 && dia <= 28){
				cout << "La fecha introducida es: " << dia << " de Febrero." << endl;
			}
			else{
				cout << "EL dia introducido es invalido. Febrero solo tiene 28 dias." << endl;
			}
		    break;
		case 3:
			if (dia > 0 && dia <= 31){
				cout << "La fecha introducida es: " << dia << " de Marzo." << endl;
			}
			else{
				cout << "EL dia introducido es invalido. Marzo solo tiene 31 dias." << endl;
			}
		    break;
		 case 4:
			if (dia > 0 && dia <= 30){
				cout << "La fecha introducida es: " << dia << " de Abril." << endl;
			}
			else{
				cout << "EL dia introducido es invalido. Abril solo tiene 30 dias." << endl;
			}
		    break;
		case 5:
			if (dia > 0 && dia <= 31){
				cout << "La fecha introducida es: " << dia << " de Mayo." << endl;
			}
			else{
				cout << "EL dia introducido es invalido. Mayo solo tiene 31 dias." << endl;
			}
		    break;
		case 6:
			if (dia > 0 && dia <= 30){
				cout << "La fecha introducida es: " << dia << " de Junio." << endl;
			}
			else{
				cout << "EL dia introducido es invalido. Junio solo tiene 30 dias." << endl;
			}
		    break;		
		case 7:
			if (dia > 0 && dia <= 31){
				cout << "La fecha introducida es: " << dia << " de Julio." << endl;
			}
			else{
				cout << "EL dia introducido es invalido. Julio solo tiene 31 dias." << endl;
			}
		    break;
		case 8:
			if (dia > 0 && dia <= 31){
				cout << "La fecha introducida es: " << dia << " de Agosto." << endl;
			}
			else{
				cout << "EL dia introducido es invalido. Agosto solo tiene 31 dias." << endl;
			}
		    break;
		case 9:
			if (dia > 0 && dia <= 30){
				cout << "La fecha introducida es: " << dia << " de Septiembre." << endl;
			}
			else{
				cout << "EL dia introducido es invalido. Septiembre solo tiene 30 dias." << endl;
			}
		    break;
		case 10:
			if (dia > 0 && dia <= 31){
				cout << "La fecha introducida es: " << dia << " de Octubre." << endl;
			}
			else{
				cout << "EL dia introducido es invalido. Octubre solo tiene 31 dias." << endl;
			}
		    break;
		case 11:
			if (dia > 0 && dia <= 30){
				cout << "La fecha introducida es: " << dia << " de Noviembre." << endl;
			}
			else{
				cout << "EL dia introducido es invalido. Noviembre solo tiene 30 dias." << endl;
			}
		    break;
		case 12:
			if (dia > 0 && dia <= 31){
				cout << "La fecha introducida es: " << dia << " de Diciembre." << endl;
			}
			else{
				cout << "EL dia introducido es invalido. Diciembre solo tiene 31 dias." << endl;
			}
		    break;
		default:
			cout << "El mes introducido es invalido. El año solo tiene 12 meses." << endl;
			break;	
	} 
    }
    else { 
        cout << "No se permite ingresar valores decimales para los meses.";
    }
    return 0;
}
   
