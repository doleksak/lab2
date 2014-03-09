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
	for(int i=0; i<ilosc; i++) { tab_1[i]=tab2.tab_1[i]; }
	}

/*! \brief Czyta ile jest elementow tablicy
 *
 * Czyta pierwszy znak z pliku i sprawdza czy nie jest mniejszy od 0. Jesli tak - program konczy dzialanie.
 */
int tablica::elementy(const char * name) {
	fstream plik(name);
	plik>>ilosc_pocz;
	if(ilosc_pocz>=0) {
		//cout<< "\nLiczba elementow tablicy: "<< ilosc_pocz <<endl;
		return ilosc_pocz;
		}
	else { 
		cout<< "BLAD! Liczba elementow tablicy "<< ilosc_pocz << " jest ujemna!"<<endl;
		exit(1);
		}
}


/*!
 * \brief Mnozy kazdy element tablicy razy 2
 *
 * Funkcja podwaja kazdy z elementow tablicy tab_1 i zapisuje wynik w tej samej tablicy.
 *
 * \param tab_1[] - tablica, ktorej elementy sa wymnazane przez 2
 * \param bufor - tablica, do ktorej zapisywana jest kopia tab_1
 * \param ilosc - zmienna okreslajaca wielkosc tablicy
 */
void tablica::mnozenie() {
	int *bufor=new int [ilosc];
	for(int i=0; i<ilosc; i++)
        bufor[i]=tab_1[i];
	for(int i=0; i<ilosc; i++) { tab_1[i]=2*bufor[i]; }
	}

/*!
 * \brief Czyta dane z pliku i zapisuje w tablicy.
 *
 * Funkcja czyta dane z pliku, ignorujac pierwszy element (jest to liczba okreslajaca ilosc elementow tablicy), 
 * wpisuje je w poszczegolne elementy tablicy tab.
 *
 * \param tab_1[] - tablica, do ktorej zapisywane sa kolejne liczby z pliku
 * \param ilosc - zmienna okreslajaca wielkosc tablicy
 * \param nazwa - zmienna okreslajaca nazwe pliku, z ktorego czytane sa liczby
 */
void tablica::wypelnij() {
	plik.open(nazwa);
	plik.ignore(1000,'\n');
	for (int i=0; i<ilosc; i++)
	plik>>tab_1[i];
	plik.close();
	}

/*!
 * \brief Wyswietla tablice
 *
 * Funkcja wyswietla tablice wczytana przez funkcje wypelnij.
 *
 * \param tab_1[] - tablica, ktora ma zostac wyswietlona
 * \param ilosc - zmienna okreslajaca wielkosc tablicy
 */
void tablica::wyswietl() {
	for(int i=0; i<ilosc; i++) { cout<<tab_1[i]<<" "; }
	cout<<endl;
	}

