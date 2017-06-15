#include "Karta.h"



CKarta::CKarta(int x, int y)
{
	Wartosc = y;
	Kolor = x;

}


CKarta::~CKarta()
{
}
int CKarta::DajWartosc()
{
	return Wartosc;
}
