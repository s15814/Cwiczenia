#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;

const int MAX_ROZMIAR = 100;

int main(){
	string wyraz;
	cout << "Podaj wyraz, a sprawdze czy jest palidromem."<<endl;
	cin >> wyraz;
	char A[MAX_ROZMIAR];
	strcpy(A,wyraz.c_str());
	int licznik = 0;
	for (int i = 0; i < wyraz.length(); i++){
		if (A[i] == A[wyraz.length()-1-i]){
			licznik++;
		}
	}
	if (licznik == wyraz.length()){
		cout << wyraz << " jest palidromem!"<<endl;
	}
	else {
		cout << wyraz << " nie jest palidromem."<<endl;
	}
	
	_getch();


}
