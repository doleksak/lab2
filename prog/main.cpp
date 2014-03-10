#include <iostream>
#include <fstream>
#include <sys/time.h>
#include <cstdlib>
#include "tablica.hh"
#include "elementy.hh"
#include <ctime>
using namespace std;

/*! \file Glowny plik programu
 *
 * Wywolanie funkcji main testuje wszystkie funkcje i przeciazenia zawarte w programie
 */
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

wejsciowa.operacja();

}
t2=clock(); 
czas=t2-t1; 
cout<<"czas:"<<czas<<endl;    /*podanie czasu na wyjsciu*/



  ofstream str;
  str.open("dane.csv");
  str << "Czas: " << czas << endl;  
  str.close();



return 0;
}
