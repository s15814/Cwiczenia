#include <iostream>
#include <conio.h>
#include <cstdlib>
using namespace std;

int main() {
	int x;
	while (true) {
		cout << "Podaj koniec przedzialu od 2 do X, w ktorym mam wyszukac liczby pierwsze: ";
		cin >> x;
		while (cin.fail() || x < 2) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Niepoprawna wartosc." << endl;
			cout << "Podaj liczbe wieksza od 2." << endl;
			cin >> x;
		}
		for (int i = 2; i <= x; i++) {
			int podzielne = 0;
			for (int j = 1; j <= x; j++) {
				if (i % j == 0) {
					podzielne++;
				}
			}
			if (podzielne == 2) {
				cout << "Liczba " << i << " jest pierwsza." << endl;
			}
		}
		_getch();
		system("cls");
	}
}