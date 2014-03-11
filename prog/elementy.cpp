#include "elementy.hh"
#include "tablica.hh"
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <list>
using namespace std;


void Elementy::wczytaj()
{
	
	int elem;
	cout<<"Podaj elementy, wpisz 0 by zakonczyc:"<<endl;
while(cin>>elem && elem != 0)
	lista.push_back(elem);
}

void Elementy::wyswietl()
{  cout<<"Twoje elementy:"<<endl;
	for( list<int>::iterator iter=lista.begin(); iter != lista.end();){
		cout<<*iter<<endl;
         iter++;
	}
     
}

