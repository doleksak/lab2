#include <iostream>
#include <fstream>
#include <sys/time.h>
#include <cstdlib>
#include "tablica.hh"
#include "elementy.hh"
using namespace std;

/*! \file Glowny plik programu
 *
 * Wywolanie funkcji main testuje wszystkie funkcje i przeciazenia zawarte w programie
 */
int main() {

	tablica pierwsza("liczby.txt");
pierwsza.wypelnij();
cout<<"\nPIERWSZA: "<<endl;
pierwsza.wyswietl();

	tablica druga("sprawdz.txt");
druga.wypelnij();
cout<<"\nDRUGA: "<<endl;	
druga.wyswietl();


pierwsza.mnozenie();
cout<<"\npierwsza.mnozenie():"<<endl;
pierwsza.wyswietl();

return 0;
}
