//Carlos Daniel Espadas Chacon Actividad 8
#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main()
{
	int v[] = { 2,-7,13,9,-15,-30,15,-22,31,-20,
				  17,40,50,-5,23,8,-9,7,20,0 };

	int pos = 0; //Numero de numeros positivos
	int neg = 0; 
	int pares = 0;
	int impares = 0;
	int zeros = 0;

	for (int k = 0; k < 20; k++) {
		if (v[k] > 0.0) {
			pos++;
		}
		if (v[k] < 0.0) {
			neg++;
		}
		if (v[k] == 0) {
			zeros++;
		}
		if ((v[k]) % 2 == 1) {
			impares++;
		}
		if ((v[k]) % 2 == 0) {
			pares++;
		}
		
	}
	cout << "Numero de numeros positivos = " << pos << endl;
	cout << "Numeros de numeros negativos = " << neg << endl;
	cout << "Numeros de 0 = " << zeros << endl;
	cout << "Numeros pares = " << pares << endl;
	cout << "Numeros impares = " << impares << endl;
	return 0;
}