#include <iostream>
#include <conio.h>
#include <random>
using namespace std;
random_device seed;
mt19937 gen(seed());
uniform_int_distribution<int> dist(1, 6);
#define x 8
#define y 10
int tablica[x][y];
void dane(int tablica[x][y]);
void pisz_tab(int tablica[x][y]);
void zamiana(int tablica[x][y]);
int main() {
	
	dane(tablica);
	pisz_tab(tablica);
	zamiana(tablica);
	pisz_tab(tablica);
	_getch();
}
void dane(int tablica[x][y]) {
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			tablica[i][j] = dist(gen);
		}
	}
}
void pisz_tab(int tablica[x][y]) {
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			cout << tablica[i][j] << " ";
		}
		cout << endl;
	}
}
void zamiana(int tablica[x][y]) {
	int do_zamiany;
	int zastepca;
	int zapamietaj_do_zamiany[10];
	int zapamietaj_zastepce[10];
	cout << "Wybierz wiersz, ktory chcesz zamienic: ";
	cin >> do_zamiany;
	while (cin.fail() || do_zamiany <= 0 || do_zamiany > 8) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Niepoprawna wartosc." << endl;
		cout << "Podaj wiersz od 1 do 8: ";
		cin >> do_zamiany;
	}
	do_zamiany = do_zamiany - 1;
	cout << "Wybierz wiersz, ktorym chcesz go zastapic: ";
	cin >> zastepca;
	while (cin.fail() || zastepca <= 0 || zastepca > 8) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Niepoprawna wartosc." << endl;
		cout << "Podaj wiersz od 1 do 8: ";
		cin >> zastepca;
	}
	zastepca = zastepca - 1;
	for (int i = 0; i < y; i++) {
		zapamietaj_do_zamiany[i] = tablica[do_zamiany][i];
		zapamietaj_zastepce[i] = tablica[zastepca][i];
	}
	for (int i = 0; i < y; i++) {
		tablica[do_zamiany][i] = zapamietaj_zastepce[i];
		tablica[zastepca][i] = zapamietaj_do_zamiany[i];
	}
}