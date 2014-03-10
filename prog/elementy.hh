#ifndef ELEMENTY_HH
#define ELEMENTY_HH
#include <iostream>
using namespace std;

class Elementy{
public:

	void wczytaj(int tab[], int n, const char * nazwa);
	void wyswietl(int tab[], int n);
	int operator = (int tab_1);


};
#endif