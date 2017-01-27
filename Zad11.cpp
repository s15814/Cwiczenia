#include <iostream>
#include <conio.h>
#include <math.h>
#include <limits>
using namespace std;

int main(){
	while(true){
		int n;
		int suma = 0;
		cout << "Podaj dodatnia liczbe calkowita, a sprawdze, czy jest doskonala!"<< endl;
		cin >> n;
		while (cin.fail() || n < 0) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Niepoprawna wartosc, lub liczba mniejsza od zera." << endl;
			cout << "Podaj liczbe calkowita, dodatnia." << endl;
			cin >> n;
		}	
		int p = sqrt ((double)n);
		int p1;

		while (p > 1){
			if (n%p == 0){
				suma = suma + p;
				p1 = n/p;
				if (p1 != p){
					suma = suma + p1;
					p = p - 1;
				}
			}
			p = p - 1;
		}
		suma = suma + 1;
		if (suma == n){
			cout << n << " jest liczba doskonala!." << endl;
		}
		else{
			cout << n << " nie jest liczba doskonala." << endl;
		}
		_getch();
		system("cls");
	}
}
