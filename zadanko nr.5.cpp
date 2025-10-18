#include<iostream>

using namespace std;

int main()
{
	double cena_b, odl, spal, koszt;

	cout << "podaj cene" << endl;
	cin >> cena_b;
	cout << "podaj odl" << endl;
	cin >> odl;
	cout << "podaj spal" << endl;
	cin >> spal;

	koszt = cena_b * odl * spal/100;

	cout << "koszt:" << koszt << "zl";








	return 0;
}
