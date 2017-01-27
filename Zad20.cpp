#include <iostream>
using namespace std;

int *czytaj_dane(int &a); 
int b ;
int *abc;
void minimalny(int *abc);
int main(){	
	abc = czytaj_dane(b);
	minimalny(abc);
}

int *czytaj_dane(int &x){
	int a;
	int *wskaznikNaInt;
	int tymczasowy;
	cout << "Podaj rozmiar wektora: ";
	cin >> a;
	b=a;
	wskaznikNaInt = new int[a];
	for (int i = 0; i < a; i++) {
		cout << "Podaj " << i+1 << " liczbe wektora:";
		cin >> tymczasowy;
		*(wskaznikNaInt + i) = tymczasowy;
	}
	return wskaznikNaInt;
}

void minimalny(int *abc){
	int minimum = *abc;
	int numer;
	for (int i = 0; i < b; i++){
		if (*(abc+i) < minimum){
			minimum = *(abc+i);
			numer = i;
		}
	}
	cout << "Najmniejsza liczba w wektorze to: " << minimum << ", o numerze: " << numer + 1 << "." << endl;
}
