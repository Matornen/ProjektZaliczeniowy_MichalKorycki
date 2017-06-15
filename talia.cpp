#include "Talia.h"



CTalia::CTalia()
{
	NrKarty = 0; //urzywam przy Tasowaniu i DajKarte


	//CKarta* TabKart[52];
	int i = 0, k=0;
	int wartosckart = 2;
	for (k = 0; k < 9; k++)
	{


		for (i=0; i < 4; i++)//2
		{
			if (i / 2 == 0)// to czarna
				TabKart[i+k*4] = new CKarta(0, wartosckart);
			else // czerwona
				TabKart[i+k*4] = new CKarta(1, wartosckart);
		}//koniec for
		wartosckart++;
	}// koniec FOR z K // tworze wszystko do 10

	 //tutaj tworze // od Jopka do Krola
	wartosckart = 2;// zaczynam od Jopka = 2;
	for (k=9; k < 12; k++)
	{


		for (i=0; i < 4; i++)//2
		{
			if (i / 2 == 0)// to czarna
				TabKart[i + k * 4] = new CKarta(0, wartosckart);
			else // czerwona
				TabKart[i + k * 4] = new CKarta(1, wartosckart);
		}//koniec for
		wartosckart++;
	}// koniec FOR z K // tworze wszystko do Krola
	//tworze ASY
	wartosckart = 11;
	for (i = 0; i < 4; i++)//2
	{
		if (i / 2 == 0)// to czarna
			TabKart[i + k * 4] = new CKarta(0, wartosckart);
		else // czerwona
			TabKart[i + k * 4] = new CKarta(1, wartosckart);
	}//koniec for
}//koniec KONSTRUKTORA


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
		for (int k = 0; k < 4; k++)
		{
			cout.width(4);
			cout << right<<TabKart[k + i * 4]->DajWartosc()<<",";
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
