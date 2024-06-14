/* 
2 Ejercicio
Cree un programa en donde se ingresen desde 1 hasta N numeros en donde por cada
multiplo de 3 se escriba "fizz"  por cada multiplo de 5 se escriba "buzz" y por
cada multiplo de 3 y 5 se escriba "fizzbuzz" y para el resto de numeros se impriman como son
*/

#include <iostream>
using namespace std;
int main (){
	int n,i;
	cout << "Ingrese la cantidad de numero" << endl;
	cin >> n;
	i=1;
	
	cout << "Los numeros seran: " << endl;
	while (i<=n){
		if (i % 3 == 0){
			if (i%5==0){
				cout << "FizzBuzz"<< endl;
			}else{
				cout << "Fizz" << endl;
			}
		}else{
			if (i % 5 ==0){
			cout << "Buzz" << endl;
			}else{
			cout << i << endl;
		}	
		}		
	i++;
	}
	return 0;
}
