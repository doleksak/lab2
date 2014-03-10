#include "elementy.hh"
#include <cstdlib>
#include <iostream>
#include <fstream>
using namespace std;


void wczytaj(int tab[], int n, const char * nazwa)
{
fstream plik(nazwa);
for (int i=0; i<n; i++)
plik>>tab[i];
}

void wyswietl(int tab[], int n)
{
for(int i=0; i<n; i++) { cout<<tab[i]<<" "; }
}









