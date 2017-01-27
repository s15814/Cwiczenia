#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <random>
using namespace std;
random_device seed;
mt19937 gen(seed());
uniform_int_distribution<int> dist(1, 6);

int main() {
	int p;
	int q;
	int wygrana;
	while (true) {
		p = dist(gen);
		q = dist(gen);
		cout << "Wyrzuciles " << p << " oraz " << q << "." << endl;

		if (p % 2 == 0) {
			if (q == 2 || q == 4 || q == 6) {
				wygrana = p + 3 * q;
			}
			else {
				wygrana = 2 * q;
			}
		}
		else {
			if (q == 1 || q == 3 || q == 6) {
				if (p == q) {
					wygrana = 5 * p + 3;
				}
				else {
					wygrana = 2 * q + p;
				}
			}
			else {
				if (p > q) {
					wygrana = q + 4;
				}
				else {
					wygrana = p + 4;
				}
			}
		}
		if (p == 5 && q == 5) {
			wygrana = wygrana + 5;
		}
		cout << "Twoj wynik to " << wygrana << " punktow!";
		_getch();
		system("cls");
	}
}