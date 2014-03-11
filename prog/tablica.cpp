#include"tablica.hh"

using namespace std;




int tablica::rozmiar(const char * name) 
{
	fstream plik(name);
	plik>>m;
	return m;
		
}





void tablica::operacja() {
for(int i=0; i<n; i++) { tab[i] *= 2; }}




void tablica::wypelnij() {
	plik.open(nazwa);
	plik.ignore(256,'\n');
	for (int i=0; i<n; i++)
	plik>>tab[i];
	plik.close();
	}


void tablica::wyswietl() {
	for(int i=0; i<n; i++) { cout<<tab[i]<<" "; }
	cout<<endl;
	}


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


void tablica::zamien_elementy(int i, int j) {
	int T=tab[i];
	tab[i]=tab[j];
	tab[j]=T;
	}

	void tablica::odwroc_tablice() 
	{
	int poczatek = 0;
	int koniec = n-1;

	while (poczatek < koniec) 
	{
		int T = tab[poczatek];
		tab[poczatek]  = tab[koniec];
		tab[koniec] = T;
	poczatek++;
	koniec--;
	}
}


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


	void tablica::dodaj_elementy(tablica &tab) 
	{	
	for (int i=0; i<n; i++) 
		{
		tablica::dodaj_element(tab.tab[i]);
		}
	}

	tablica& tablica::operator= (tablica & tab2) 
  {
	for(int i=0; i<n; i++) 
		{ 
			tab[i]=tab2.tab[i]; 
		}
  }