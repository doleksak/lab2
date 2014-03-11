#include <iostream>
#include <fstream>
#include <sys/time.h>
#include <cstdlib>
#include "tablica.hh"
#include "elementy.hh"
#include <ctime>
using namespace std;


int main() {
	int powtorz=0;  /*liczba powtorzen operacji*/
	clock_t t1, t2; /*stale czasu*/
	double czas; 	/*zmierzony czas wykonywania operacji*/
cout<<"podaj liczbe powtorzen"<<endl;
cin>>powtorz;

	tablica wejsciowa("liczby.txt");
wejsciowa.wypelnij();
cout<<endl;
wejsciowa.wyswietl();

	tablica sprawdz("sprawdz.txt");
sprawdz.wypelnij();
cout<<endl;	
sprawdz.wyswietl();



t1=clock();
for (int i = 0; i < powtorz; i++)
{
wejsciowa.wypelnij();

wejsciowa.operacja();
}

t2=clock();
czas=t2-t1; 
cout<<"czas:"<<czas<<endl;    /*podanie czasu na wyjsciu*/

sprawdz.porownaj(wejsciowa);


  ofstream str;
  str.open("dane.csv");
  str << "Czas: " << czas << endl;  
  str.close();

Elementy lista;
lista.wczytaj();
lista.dodaj_elem();
lista.wyswietl();
return 0;
}
