#ifndef ELEMENTY_HH
#define ELEMENTY_HH
#include <iostream>
using namespace std;

class Elementy{
public:

	void Wczytaj(int tab[], int ilosc, const char * nazwa);
	void wyswietl(int tab[], int ilosc);
	void mnozenie(int tab_1[], int tab_2[], int ilosc);
	int operator = (int tab_1);


};
#endif