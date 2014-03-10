#include"tablica.hh"

using namespace std;

/*!
 * \file
 * \brief Definicje funkcji klasy tablica
 *
 */


/*! \brief Przypisuje kazdy element tablicy do tab2 podanej jako argument funkcji
 * 
 */
tablica& tablica::operator= (tablica & tab2) {
	for(int i=0; i<n; i++) { tab[i]=tab2.tab[i]; }
	}

/*! \brief Czyta ile jest elementow tablicy
 *
 * Czyta pierwszy znak z pliku i sprawdza czy nie jest mniejszy od 0. Jesli tak - program konczy dzialanie.
 */
int tablica::rozmiar(const char * name) 
{
	fstream plik(name);
	plik>>m;
	return m;
		
}


/*!
 * \brief Mnozy kazdy element tablicy razy 2
 *
 * Funkcja podwaja kazdy z elementow tablicy tab i zapisuje wynik w tej samej tablicy.
 *
 * \param tab[] - tablica, ktorej elementy sa wymnazane przez 2
 * \param bufor - tablica, do ktorej zapisywana jest kopia tab
 * \param n - zmienna okreslajaca wielkosc tablicy
 */


void tablica::operacja() {
for(int i=0; i<n; i++) { tab[i] *= 2; }}



/*!
 * \brief Czyta dane z pliku i zapisuje w tablicy.
 *
 * Funkcja czyta dane z pliku, ignoruje pierwszy element do znaku nowej linii,
 * wpisuje je w poszczegolne elementy tablicy tab.
 *
 * \param tab[] - tablica, do ktorej zapisywane sa kolejne liczby z pliku
 * \param n 	- zmienna okreslajaca wielkosc tablicy
 * \param nazwa - zmienna okreslajaca nazwe pliku, z ktorego czytane sa liczby
 */
void tablica::wypelnij() {
	plik.open(nazwa);
	plik.ignore(256,'\n');
	for (int i=0; i<n; i++)
	plik>>tab[i];
	plik.close();
	}

/*!
 * \brief Wyswietla tablice
 *
 * Funkcja wyswietla tablice wczytana przez funkcje wypelnij.
 *
 * \param tab[] - tablica, ktora ma zostac wyswietlona
 * \param n - zmienna okreslajaca wielkosc tablicy
 */
void tablica::wyswietl() {
	for(int i=0; i<n; i++) { cout<<tab[i]<<" "; }
	cout<<endl;
	}


///////////////////////////////////////////////////////////////
bool tablica::operator ==(tablica &tab2)
  {
	for(int i=0; i<n; i++){
		
    	if(tab2.tab[i] == tab[i]) {
	
			}   
    	else {
		
    	return false; 
			}
	}
return true;
  }



  tablica& tablica::operator+ (tablica & tab2){
	static tablica wynik;
	for(int i=0; i<n; i++) { wynik.tab[i]=tab[i]+tab2.tab[i]; }
	return wynik;	
	}


	void tablica::zamien_elementy(int i, int j) {
	int pomoc=tab[i];
	tab[i]=tab[j];
	tab[j]=pomoc;
	}


	void tablica::odwroc_tablice() {
	int poczatek = 0;
	int koniec = n-1;

	while (poczatek < koniec) {
		int pomoc = tab[poczatek];
		tab[poczatek]  = tab[koniec];
		tab[koniec] = pomoc;
	poczatek++;
	koniec--;
	}
}

void tablica::dodaj_element(int e) {
	int *bufor = new int [n]; 		
	for(int i=0; i<n; i++)
        bufor[i]=tab[i];  			
		tab = new int[n+1]; 		
	for(int i=0; i<n; i++)
        tab[i]=bufor[i];  			
	tab[n]=e; 					
	delete [] bufor; 					
	n++;
	}

/*!
 * \brief Dodaje elementy tablicy podanej jako argument funkcji (tab)
 *
 * Funkcja wykorzystuje metode dodaj_element
 */
void tablica::dodaj_elementy(tablica &tab) {	
	for (int i=0; i<m; i++) {
		tablica::dodaj_element(tab.tab[i]);
		}
	}