#include<cstring>
#include<iostream>
#include<cctype>
#include<iomanip>


using namespace std;


int main() {
	
	double tablica[8];
	double srednia=0;
	double suma=0;
	setprecision(2);
	cout << "podaj 8 liczb" << endl;
	for (int i = 0; i < 8; i++) {
		cout << "liczba" << i + 1 << "; " << endl;
		cin>> tablica[i];
		suma = suma + tablica[i];
		srednia = suma / 8;
	}
	cout << "srednia liczb" <<srednia;
	return 0;
} 
