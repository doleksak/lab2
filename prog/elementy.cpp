#include "elementy.hh"
#include "tablica.hh"
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <list>
using namespace std;


/*!
 * \file
 * \brief Definicje funkcji klasy Elementy
 *
 */


/*! \brief Pozwala na podanie argumentow z klawiatury i dodanie ich na liste
 * 
 */

void Elementy::wczytaj()
{
	
	int elem;
	cout<<"Podaj elementy, wpisz 0 by zakonczyc:"<<endl;
while(cin>>elem && elem != 0)
	lista.push_back(elem);
}

/*! \brief Wyswietla liste
 * 
 */

void Elementy::wyswietl()
{  cout<<"Twoje elementy:"<<endl;
	for( list<int>::iterator iter=lista.begin(); iter != lista.end();){
		cout<<*iter<<endl;
         iter++;
	}
     
}

/*! \brief Dodaje elementy do listy
 * 
 */

void Elementy::dodaj_elem()
{  	int i;
	cout<<"podaj argument:"<<endl;
	cin>>i;
	lista.push_front(i);
	}
     
/*bool Elementy::operator==(Elementy lista)
{
	int j, k;
	j=lista.size();
	k=lista2.size();
if (j!=k)
{
	return false;
}
	return true;
} 
*/
