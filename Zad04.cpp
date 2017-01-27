#include <iostream>
#include "conio.h"
#include <limits>
using namespace std;

int main(){

	double a;
	double b;
	double c;

	cout<<"Podaj dlugosci trzech roznych odcinkow"<<endl;
	cout<<"Podaj dlugosc odcinka a: "<<endl;
	cin>> a;
		while (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Niepoprawna wartosc." << endl;
		cout << "Podaj liczbe." << endl;
		cin >> a;
	}
	cout<<"Podaj dlugosc odcinka b: "<<endl;
	cin>> b;
		while (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Niepoprawna wartosc." << endl;
		cout << "Podaj liczbe." << endl;
		cin >> b;
	}
	cout<<"Podaj dlugosc odcinka c: "<<endl;
	cin>> c;
		while (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Niepoprawna wartosc." << endl;
		cout << "Podaj liczbe." << endl;
		cin >> c;
	}
	
	if ((a > b) && (a > c))
		cout << "Odcinek a jest najdluzszy"<<endl;
	else if ((b > a) && (b > c))
		cout << "Odcinek b jest najdluzszy"<<endl;
	else if ((c > a) && (c > b))
		cout << "Odcinek c jest najdluzszy"<<endl;
	else
		cout <<"Podano odcinki o tej samej dlugosci"<<endl;

	_getch();

}
