#include <iostream>
#include <conio.h>
using namespace std;
int n;
int k;
int m;
void wczytaj_dane();
int silnia(int z);
int main() {
	wczytaj_dane();
	
	m = silnia(n)/(silnia(k)*silnia(n-k));
	cout << "Z " << n << " elementow mozna utworzyc " << m << " zbiorow " << k << " elementowych.";
	_getch();
}

void wczytaj_dane() {
	int x;
	cout << "Podaj liczbe elementow: ";
	cin >> x;
	while (cin.fail() || x <= 0) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Niepoprawna wartosc." << endl;
		cout << "Podaj liczbe wieksza od zera: ";
		cin >> x;
	}
	n = x;
	int y;
	cout << "Podaj liczbe elementow w zbiorze: ";
	cin >> y;
	while (cin.fail() || y <= 0 || y > x) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Niepoprawna wartosc." << endl;
		cout << "Podaj liczbe elementow w zbiorze mniejsza od calkowitej liczby elementow: ";
		cin >> y;
	}
	k = y;
}
int silnia(int z) {
	int silnia = 1;
	for (int i = z; i > 1; i--) {
		silnia *= i;
	}
	return silnia;
}