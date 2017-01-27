#include <iostream>
#include <conio.h>
#include <cstdlib>
using namespace std;

int main() {
	int p;
	int q;
	int wygrana;
	while (true) {
		cout << "Podaj wynik pierwszego rzutu: ";
		cin >> p;
		while (cin.fail() || p < 1 || p > 6) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Niepoprawna wartosc." << endl;
			cout << "Podaj liczbe od 1 do 6." << endl;
			cin >> p;
		}
		cout << "Podaj wynik drugiego rzutu: ";
		cin >> q;
		while (cin.fail() || q < 1 || q > 6) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Niepoprawna wartosc." << endl;
			cout << "Podaj liczbe od 1 do 6." << endl;
			cin >> q;
		}

		if (p % 2 == 0) {
			if (q == 2 || q == 4 || q == 6) {
				wygrana = p + 3 * q;
			}
			else {
				wygrana = 2 * q;
			}
		}
		else {
			if (q == 1 || q == 3 || q == 6) {
				if (p == q) {
					wygrana = 5 * p + 3;
				}
				else {
					wygrana = 2 * q + p;
				}
			}
			else {
				if (p > q) {
					wygrana = q + 4;
				}
				else {
					wygrana = p + 4;
				}
			}
		}
		if (p == 5 && q == 5) {
			wygrana = wygrana + 5;
		}
		cout << "Twoj wynik to " << wygrana << " punktow!";
		_getch();
		system("cls");
	}
}