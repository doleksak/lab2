#ifndef ELEMENTY_HH
#define ELEMENTY_HH
#include <iostream>
#include <list>
using namespace std;

/*! 
 *	\file
 *	\brief Definicja klasy Elementy i jej funkcji
 * 
 */

class Elementy{
public:
	list<int> lista;
	list<int> lista2;

	void wczytaj();
	void wyswietl();

	
	
	void dodaj_elem();
	
/*
bool operator==(Elementy lista);   

*/

};

#endif