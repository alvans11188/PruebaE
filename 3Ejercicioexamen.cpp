/*
3 Ejercicio
Cree un programa para invertir el numero ingresado, con funciones
ejemplo
1002 -> 2001
*/

#include <iostream>
using namespace std;

int main(){
	int a,s,x;
	cout << "Ingrese un numero que desea invertir" << endl;
	cin >> x;
	s=0;
	 while (x>0){
	 		a = x % 10;
	 	s = (s * 10) + a;
	 	x = x / 10;
	
	 }
	cout << "El numero invertido sera: " << s;
		
	return 0;
}
