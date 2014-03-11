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
