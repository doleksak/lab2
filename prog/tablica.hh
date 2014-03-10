#ifndef TABLICA_HH
#define TABLICA_HH
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

/*!
 * \file
 * \brief Definicja klasy tablica
 *
 */
class tablica {
	
	int n;
	int m;  //liczba argumentow w pliku
	int *tab;	
	const char * nazwa;
	fstream plik;

	int rozmiar(const char * name);
	
	public:
	void wypelnij();
	void wyswietl();
	void operacja();
	
	void zamien_elementy(int i, int j);
	void odwroc_tablice();	
	void dodaj_element(int e);
	void dodaj_elementy(tablica& tab);
	bool operator ==(tablica& Arg2);
	tablica& operator+(tablica& tab2);
	tablica& operator=(tablica& tab2);

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
