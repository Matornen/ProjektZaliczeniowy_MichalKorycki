#ifndef TALIA_H
#define TALIA_H
#include "Karta.h"
#include <cstdlib>//biblioteka dla srand
#include <ctime>

class CTalia
{
private:
	CKarta* TabKart[52];// kompozycja
	int NrKarty;
public:
	CTalia();
	~CTalia();
	int DajNrKarty();
	CKarta* DajKarte();
	void Tasuj();
	void DrukujTalie();
	CTalia* DajAdres();
};



#endif // COKOLWIEK_H

