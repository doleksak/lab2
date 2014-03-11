#ifndef TABLICA_HH
#define TABLICA_HH
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

/*!
 * \file
 * \brief Definiuje klase tablica i jej metody
 */

class tablica {
	
	int n;
	int m;  //liczba argumentow w pliku
	int *tab;
	int *tabspr;	
	const char * nazwa;
	fstream plik;

	int rozmiar(const char * plik);
	
	public:
	void wypelnij();
	void wyswietl();
	void operacja();
	void porownaj(tablica& Arg);
	/**********************************************************************************/
	void zamien_elementy(int i, int j); /* 0 jest 1 elem*/
	void odwroc_tablice();	
	void dodaj_element(int e);
	void dodaj_elementy(tablica& tab);
	tablica& operator=(tablica& tab2);

	/*!
 * \brief Konstruktory klasy tablica
 *
 * Konstruktor inicjalizuje poczatkowe wartosci parametrow.
 *
 * \param nazwa - nazwa pliku
 * \param n,m 	- ilosc argumentow w tablicy
 */
	tablica(const char * plik) {nazwa=plik, m=rozmiar(nazwa), n=m, tab=new int [m];}
	~tablica() {delete [] tab;}
};

#endif
