/*
1 Ejercicio
realice un programa en donde se ingresen horas, minutos y segundos, el programa debe
determinar si la hora ingresada es valida, y debe dar como resultado la hora 1 segundo despues de la 
hora ingresada
horas valida  minutos validos segundos validos
0-23			00-59			00-59
ejemplo 
22:45:46 -> 22:45:47
23:59:59 -> 00:00:00
*/

#include <iostream>
using namespace std;
int main (){
	int hora, minuto, segundo;
	cout << "Ingrese la hora" << endl;
	cin >> hora;
	cout << "Ingrese los minutos: " << endl;
	cin >> minuto;
	cout << "Ingrese los segundos: " << endl;
	cin >> segundo;
	
	segundo = segundo +1;
	
	if (segundo == 60){
		segundo = 00;
		minuto = minuto +1;
		if (minuto == 60){
			minuto = 00;
			hora = hora + 1;
			if (hora == 24){
				hora = 00;
			}
		}
	}
	cout << "La hora un segundo despues es: " << hora << ":"<< minuto <<":"<< segundo << endl;
	return 0;
}



