#include"tablica.hh"

using namespace std;

/*!
 * \file
 * \brief Definicje metod klasy tablica
 *
 */

/*! \brief Sprawdza liczbe argumentow pliku
 * 
 */

int tablica::rozmiar(const char * name) 
{
	fstream plik(name);
	plik>>m;
	return m;
		
}

/*! \brief Wykonuje operacje mnozenia
 * 
 */

void tablica::operacja() 
{
for(int i=0; i<n; i++) 
	{ tab[i] *= 2; }
}

/*! \brief Otwiera plik, pomija pierwsza wartosc i zapisuje elemety do tablicy
 * 
 */


void tablica::wypelnij() 
	{
	plik.open(nazwa);
	plik.ignore(256,'\n');
	for (int i=0; i<n; i++)
	plik>>tab[i];
	plik.close();
	}

/*! \brief Wyswietla tablice
 * 
 */

void tablica::wyswietl() 
	{
	for(int i=0; i<n; i++) { cout<<tab[i]<<" "; }
	cout<<endl;
	}


/*! \brief Funkcja sprawdza czy tablice maja jednakowy rozmiar, wypisuje blad jesli tak nie jest
 * 
 */

void tablica::porownaj(tablica &tab2)
  {
	for(int i=0; i<n; i++)
	{
		 if(tab2.tab[i]!=tab[i] || n!=m)
		 {      
       	cout<<"bledny wynik"<<endl;
       	break;
    	 }
    	
	}

  }
/*****************************************************/

/*! \brief Zamienia elementy(elem 1 to indeks 0)
 * 
 */

void tablica::zamien_elementy(int i, int j) 
	{
	int T;
	T=tab[i];
	tab[i]=tab[j];
	tab[j]=T;
	}

/*! \brief Uzywa funkcji zamien_elementy do odwrocenia calej tablicy
 * 
 */

	void tablica::odwroc_tablice() 
	
{
  for (int i=0; i<n/2; i++)	
  	{
	  zamien_elementy(i, n-1-i);
	}
}

/*! \brief Dodaje nowy element poprzez utworzenie
 * 	pomocniczej, dynamicznej tablicy, zwiekszenie poprzedniej,
 *  przepisanie do niej pomocniczej i dodanie nowego elementu na koniec
 */

void tablica::dodaj_element(int e) 
	{
	int *T = new int [n]; 		
	for(int i=0; i<n; i++)
        T[i]=tab[i];  			
		tab = new int[n+1]; 		
	for(int i=0; i<n; i++)
        tab[i]=T[i];  			
	tab[n]=e; 					
	delete [] T; 					
	n++;
	}

/*! \brief Dodaje kilka elementow, wykorzystujac funkce dodaj_element
 * 
 */

	void tablica::dodaj_elementy(tablica &tab) 
	{	
	for (int i=0; i<n; i++) 
		{
		tablica::dodaj_element(tab.tab[i]);
		}
	}

/*! \brief Przeladowanie operatora porownania
 * 
 */

	tablica& tablica::operator= (tablica & tab2) 
  {
	for(int i=0; i<n; i++) 
		{ 
			tab[i]=tab2.tab[i]; 
		}
  }