#ifndef TABLICA_HH
#define TABLICA_HH
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;


class tablica {
	
	int n;
	int m;  //liczba argumentow w pliku
	int *tab;
	int *tabspr;	
	const char * nazwa;
	fstream plik;

	int rozmiar(const char * name);
	
	public:
	void wypelnij();
	void wyswietl();
	void operacja();
	void porownaj(tablica& Arg);

	/*!
 * \brief Konstruktory klasy tablica
 *
 * Konstruktor inicjalizuje poczatkowe wartosci parametrow.
 *
 * \param nazwa - nazwa pliku
 * \param n 	- ilosc argumentow w tablicy
 */
	tablica(const char * name) {nazwa=name, m=rozmiar(nazwa), n=m, tab=new int [n];}
	tablica() {nazwa="liczby.txt", m=rozmiar(nazwa), n=m, tab=new int [n];}
	~tablica() {delete [] tab;}
};

#endif
