#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include "conio.h"
using namespace std;

int main(){
	double r;
	double kat;
	double kat_R;
	double F;

	cout<<"Podaj promien okregu: "<<endl;
	cin>>r;
	cout<<"Podaj kat interesujacego cie wycinka w stopniach: "<<endl;
	cin>>kat;
	kat_R = (M_PI*kat)/180;
	
	F = ((r*r)/2)*(((M_PI*kat)/180)-sin(kat_R));
	cout<<"Pole odcinka wynosi: "<<F<<"."<<endl;

	_getch();
	}