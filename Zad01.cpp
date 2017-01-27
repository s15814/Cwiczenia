#include <iostream>
#include "conio.h"
using namespace std;

int main() {
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.width(8);
	cout.precision(3);

	double r;
	double a;
	double b;
	double delta;
	double wspA;
	double wspB;
	double wspC;

	cout << "Podaj wspolczynnik a: " << endl;
	cin >> a;
	cout << "Podaj wspolczynnik b: " << endl;
	cin >> b;
	cout << "Podaj promien okregu 'r': " << endl;
	cin >> r;
	wspA = (a*a + 1);
	wspB = 2 * a*b;
	wspC = (b*b - r*r);
	cout << wspA << endl << wspB << endl << wspC << endl;

	delta = (wspB*wspB - 4 * wspA*wspC);
	cout << delta << endl;
	if (delta == 0)
		cout << "Prosta jest styczna do okrêgu." << endl;
	else if (delta > 0)
		cout << "Prosta przecina okrag w dwoch punktach." << endl;
	else
		cout << "Prosta i okrag nie maja punktow wspolnych." << endl;

	_getch();
}