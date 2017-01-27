#include <iostream>
#include <conio.h>
#include <cstdlib>
using namespace std;

void wczytaj_dane();
void przelicz_zarobek();
const int A = 15;
const int B = 25;
const int C = 30;
const int D = 35;
char kategoria;
int ile_godzin;
int stawka;
int main() {
	while (true) {
		wczytaj_dane();
		przelicz_zarobek();
		_getch();
		system("cls");
	}
}

void wczytaj_dane() {
	int sprawdzam = 1;
	cout << "Podaj kategorie zarobkow: ";
	cin >> kategoria;
	while (sprawdzam == 1) {
		if (kategoria == 'A' || kategoria == 'a') {
			stawka = A;
			sprawdzam = 0;
		}
		else if (kategoria == 'B' || kategoria == 'b') {
			stawka = B;
			sprawdzam = 0;
		}
		else if (kategoria == 'C' || kategoria == 'c') {
			stawka = C;
			sprawdzam = 0;
		}
		else if (kategoria == 'D' || kategoria == 'd') {
			stawka = D;
			sprawdzam = 0;
		}
		else {
			cout << "Podaj jedna z wlasciwych kategorii: A, B, C lub D: ";
			cin >> kategoria;
		}
	}
	cout << "Podaj liczbe przepracowanych godzin: ";
	cin >> ile_godzin;
	while (cin.fail() || ile_godzin <= 0) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Niepoprawna wartosc." << endl;
		cout << "Podaj liczbe przepracowanych godzin: ";
		cin >> ile_godzin;
	}
}
void przelicz_zarobek() {
	int zarobek_brutto;
	double zarobek_netto;

	if (ile_godzin > 40) {
		int nadgodziny = ile_godzin - 40;
		int normalnie_platne = ile_godzin - nadgodziny;
		zarobek_brutto = normalnie_platne * stawka + nadgodziny * stawka * 2;
		if (zarobek_brutto <= 700) {
			zarobek_netto = zarobek_brutto * 0.85;
		}
		else if (zarobek_brutto <= 1200) {
			zarobek_netto = zarobek_brutto * 0.8;
		}
		else {
			zarobek_netto = zarobek_brutto * 0.75;
		}
	}
	else {
		zarobek_brutto = ile_godzin * stawka;
		if (zarobek_brutto <= 700) {
			zarobek_netto = zarobek_brutto * 0.85;
		}
		else if (zarobek_brutto <= 1200) {
			zarobek_netto = zarobek_brutto * 0.8;
		}
		else {
			zarobek_netto = zarobek_brutto * 0.75;
		}
	}
	cout << "Zarobki wynosza:" << endl << "BRUTTO : " << zarobek_brutto << endl << "NETTO: " << zarobek_netto;
}