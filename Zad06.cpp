#include <iostream>
#include <conio.h>
#include <limits>
using namespace std;

void wyznaczDzielnikiForem(int n);
void wyznaczDzielnikiWhilem(int n);
void wyznaczDzielnikiDoWhilem(int n);


int main(){
	int n;
	cout << "Podaj liczbe 'n', dla ktorej mam wypisac jej dzielniki: "<<endl;
	cin >> n;
	while (cin.fail() || n == 0) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Niepoprawna wartosc." << endl;
		cout << "Podaj liczbe." << endl;
		cin >> n;
	}
	wyznaczDzielnikiForem(n);
	//wyznaczDzielnikiWhilem(n);
	//wyznaczDzielnikiDoWhilem(n);

	_getch();
}

void wyznaczDzielnikiForem(int n){
	cout << "Dzielniki liczby " << n << " to: "<<endl;
	for (int i = 1; i <= n; i++){
		if (n%i == 0){
			cout << i << endl;
		}	
	}
}

void wyznaczDzielnikiWhilem(int n){
	int i = 1;
	cout << "Dzielniki liczby " << n << " to: "<<endl;
	while (i <= n){
		if (n%i == 0){
			cout << i << endl;
		}
		i++;
	}
}

void wyznaczDzielnikiDoWhilem(int n){
	int i = 1;
	cout << "Dzielniki liczby " << n << " to: "<<endl;
	do{
		if (n%i == 0){
			cout << i << endl;
		}
		i++;
	}
	while (i <= n);
}
