#include "elementy.hh"
#include <cstdlib>
#include <iostream>
#include <fstream>
using namespace std;


void Wczytaj(int tab[], int ilosc, const char * nazwa)
{
fstream plik(nazwa);
plik.ignore(1000,'\n');
for (int i=0; i<ilosc; i++)
plik>>tab[i];
}

void wyswietl(int tab[], int ilosc)
{
for(int i=0; i<ilosc; i++) { cout<<tab[i]<<" "; }
}

void mnozenie(int tab_1[], int tab_2[], int ilosc) {
for(int i=0; i<ilosc; i++) { tab_2[i]=2*tab_1[i]; }
}






