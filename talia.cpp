#include "Talia.h"



CTalia::CTalia()
{
	NrKarty = 0; //urzywam przy Tasowaniu i DajKarte


	//CKarta* TabKart[52];
	int k=0;
	//int IdKarty=0;

	for (int j=0; j<4; j++)
    {
        //int wartosckart = 2;
        for (k = 0; k < 9; k++)
        {
            TabKart[k+j*13] = new CKarta(j, k+2, k+j*13);
            //wartosckart++;
            //IdKarty++;
        }//koniec for
        //wartosckart=2;
        for (k=0; k<3; k++)
        {
            TabKart[k+9+j*13] = new CKarta(j, k+2, k+9+j*13);
           // wartosckart++;
          //  IdKarty++;
        }
        TabKart[j*13+12]=new CKarta(j, 11, j*13+12);
        //IdKarty++;
    }//koniec KONSTRUKTORA
}

CTalia::~CTalia()
{
	for (int i = 0; i < 51; i++)
	{
		delete TabKart[i];
		TabKart[i] = 0;
	}
}


void CTalia::Tasuj()
{
	int i = 0, k;
	srand(time(NULL));
	CKarta *przechowywana;
	for (i=0; i < 51; i++)
	{
		k = rand() % 52;
		przechowywana = TabKart[i]; // wrzucam do przechowanej
		TabKart[i] = TabKart[k];//  podmieniam Karte
		TabKart[k] = przechowywana;// Zamieniam karty
	}
	NrKarty = 0;//spowrotem ustawiam nr karty na 0
}


CKarta *CTalia::DajKarte()
{
	return TabKart[NrKarty++];
}


void CTalia::DrukujTalie()
{
	using namespace std;
	cout << "\n";
	for (int i = 0; i < 13; i++)
	{
		{
			cout.width(8);
			cout << right<<TabKart[i*4]->PokazKarte()<<"; ";
			cout << right<<TabKart[i*4+1]->PokazKarte()<<"; ";
			cout << right<<TabKart[i*4+2]->PokazKarte()<<"; ";
			cout << right<<TabKart[i*4+3]->PokazKarte()<<"; ";
		}
		cout << "\n";
	}
}

int CTalia::DajNrKarty()
{
	return NrKarty;
}

CTalia* CTalia::DajAdres()
{
	return this;
}
