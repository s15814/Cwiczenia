#include <iostream>
#include <conio.h>
#include <limits>
using namespace std;

int main() {
	int a;
	int b;
	int a1;
	int b1;

	cout << "Podaj dwie liczby dodatnie, dla ktorych mam obliczyc najmniejsza wspolna wielokrotnosc." << endl;
	cout << "Podaj pierwsza liczbe: " << endl;
	cin >> a;
	while (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Niepoprawna wartosc." << endl;
		cout << "Podaj liczbe calkowita." << endl;
		cin >> a;
	}
	cout << "Podaj druga liczbe: " << endl;
	cin >> b;
	while (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Niepoprawna wartosc." << endl;
		cout << "Podaj liczbe calkowita." << endl;
		cin >> b;
	}

	if (a <= 0 || b <= 0) {
		cout << "Najmniejsza wspolna wielokrotnosc wynosi 0." << endl;
	}
	else {
		a1 = a;
		b1 = b;
		while (a1 != b1) {
			if (a1 > b1) {
				b1 = b1 + b;
			}
			else {
				a1 = a1 + a;
			}
		}
		cout << "Najmniejsza wspolna wielokrotnosc liczb " << a << " oraz " << b << " wynosi: " << a1 << "." << endl;
	}

	_getch();
}
