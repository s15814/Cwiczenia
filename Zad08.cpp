#include <iostream>
#include <conio.h>
#include <limits>
using namespace std;

int main() {
	int a;
	int b;
	int a1;
	int b1;

	cout << "Podaj dwie liczby dodatnie, dla ktorych mam obliczyc najwiekszy wspolny dzielnik." << endl;
	cout << "Podaj pierwsza liczbe: " << endl;
	cin >> a;
	while (cin.fail() || a < 0) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Niepoprawna wartosc, lub liczba mniejsza od zera." << endl;
		cout << "Podaj liczbe calkowita, dodatnia." << endl;
		cin >> a;
	}
	cout << "Podaj druga liczbe: " << endl;
	cin >> b;
	while (cin.fail() || b < 0) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Niepoprawna wartosc, lub liczba mniejsza od zera." << endl;
		cout << "Podaj liczbe calkowita, dodatnia." << endl;
		cin >> b;
	}

	a1 = a;
	b1 = b;

	while (a1 != b1) {
		if (a1 > b1) {
			a1 = a1 - b1;
		}
		else {
			b1 = b1 - a1;
		}
	}
	cout << "Najwiekszy wspolny dzielnik liczb " << a << " oraz " << b << " to: " << a1 << "." << endl;

	_getch();
}
