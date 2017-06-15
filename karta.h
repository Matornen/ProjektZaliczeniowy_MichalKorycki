#ifndef KARTA_H
#define KARTA_H
#include <iostream>
class CKarta
{
private:
	int Kolor; // 0 - czarna, 1 - czerwona
	int Wartosc;
public:
	CKarta(int kolor, int wartosc);
	~CKarta();
	int DajWartosc();
};

#endif // COKOLWIEK_H

