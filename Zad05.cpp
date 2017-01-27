#include <iostream>
#include "conio.h"
using namespace std;

void sumowanie(int n);


int main(){
	int n;

	cout << "Podaj liczbe 'n', do ktorej sumowac kwadraty: "<<endl;
	cin >> n;
	while (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Niepoprawna wartosc." << endl;
		cout << "Podaj liczbe." << endl;
		cin >> n;
	}
	sumowanie(n);

	_getch();
}

void sumowanie(int n){
	int suma = 0;
	for(int i=1; i<=n; i++){
		suma += i*i;
		if (i < n){
			cout << i <<" * "<< i << " + ";
		}
		else
			cout << i << " * " << i << " = " << suma;
	}
}