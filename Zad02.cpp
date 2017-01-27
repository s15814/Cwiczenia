#include <iostream>
#include "conio.h"
using namespace std;

int main(){
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.width(8);
	cout.precision(3);
	double x1;
	double y1;
	double z1;
	double x2;
	double y2;
	double z2;
	double detA;
	double detX;
	double detY;
	double x;
	double y;

	cout << "Podaj wspolczynnik przy 'x' w pierwszym rownaniu: "<<endl;
	cin>>x1;
	cout << "Podaj wspolczynnik przy 'y' w pierwszym rownaniu: "<<endl;
	cin>>y1;
	cout << "Podaj wyraz wolny w pierwszym rownaniu: "<<endl;
	cin>>z1;
	cout << "Podaj wspolczynnik przy 'x' w drugim rownaniu: "<<endl;
	cin>>x2;
	cout << "Podaj wspolczynnik przy 'y' w drugim rownaniu: "<<endl;
	cin>>y2;
	cout << "Podaj wyraz wolny w drugim rownaniu: "<<endl;
	cin>>z2;

	detA = (x1*y2 - x2*y1);
	detX = (z1*y2 - z2*y1);
	detY = (x1*z2 - x2*z1);

	if (detA != 0){
		x = detX/detA;
		y = detY/detA;
		cout<<"Wynik to: x = "<<x<<" y = "<<y<<"."<<endl;
	}
	else if (detX==0 || detY==0)
		cout << "Uklad rownan ma nieskonczenie wiele rozwiazan";
	else
		cout << "Uklad rownan jest sprzeczny";

	
	_getch();

}