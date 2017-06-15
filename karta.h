#ifndef KARTA_H
#define KARTA_H
#include <iostream>

class CKarta
{
private:
	int Kolor; // 0 - Trefl, 1 - Kier, 2 - Pik; 3 - Karo, zgodnie z zasadą brydżową TeKiPeKa
	int Wartosc;
	int Id;
	char NazwaKarty[3];
public:
	CKarta(int kolor, int wartosc, int Id);
	~CKarta();
	int DajWartosc();
	char* PokazKarte();
};

#endif // COKOLWIEK_H

