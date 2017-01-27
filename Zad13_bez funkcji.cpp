#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int m;
	int n;
	int k;
	cout << "Podaj liczbe elementow: ";
	cin >> n;
	while (cin.fail() || n <= 0) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Niepoprawna wartosc." << endl;
		cout << "Podaj liczbe wieksza od zera: ";
		cin >> n;
	}
	cout << "Podaj liczbe elementow w zbiorze: ";
	cin >> k;
	while (cin.fail() || k <= 0 || k > n) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Niepoprawna wartosc." << endl;
		cout << "Podaj liczbe elementow w zbiorze mniejsza od calkowitej liczby elementow: ";
		cin >> k;
	}
	int n_silnia = 1;
	int k_silnia = 1;
	int roznica_silnia = 1;
	for (int i = n; i > 1; i--) {
		n_silnia *= i;
	}
	for (int i = k; i > 1; i--) {
		k_silnia *= i;
	}
	for (int i = (n-k); i > 1; i--) {
		roznica_silnia *= i;
	}
	m = n_silnia / (k_silnia*roznica_silnia);
	cout << "Z " << n << " elementow mozna utworzyc " << m << " zbiorow " << k << " elementowych.";
	_getch();
}