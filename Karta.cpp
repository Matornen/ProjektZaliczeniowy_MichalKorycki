#include "Karta.h"
#include <string.h>



CKarta::CKarta(int x, int y, int i)
{
	Wartosc = y;
	Kolor = x;
    Id=i;
    NazwaKarty[0]=' ';
    NazwaKarty[1]=' ';
    NazwaKarty[2]=' ';
    switch (x)
    {
    case 0:
    NazwaKarty[2]='P'; break ;
    case 1:
    NazwaKarty[2]='K'; break ;
    case 2:
    NazwaKarty[2]='T'; break;
    case 3:
    NazwaKarty[2]='D'; break;
    }
    switch (i%13)
    {
    case 0:
    NazwaKarty[1]='2'; break;
    case 1:
    NazwaKarty[1]='3'; break;
    case 2:
    NazwaKarty[1]='4'; break;
    case 3:
    NazwaKarty[1]='5'; break;
    case 4:
    NazwaKarty[1]='6'; break;
    case 5:
    NazwaKarty[1]='7'; break;
    case 6:
    NazwaKarty[1]='8'; break;
    case 7:
    NazwaKarty[1]='9'; break;
    case 8:
    NazwaKarty[0]='1';
    NazwaKarty[1]='0'; break;
    case 9:
    NazwaKarty[1]='J'; break;
    case 10:
    NazwaKarty[1]='Q'; break;
    case 11:
    NazwaKarty[1]='K'; break;
    case 12:
    NazwaKarty[1]='A'; break;
    }
}


CKarta::~CKarta()
{
}

int CKarta::DajWartosc()
{
	return Wartosc;
}

char* CKarta::PokazKarte()
{
    char* ch = new char[3];
    char* sim = new char[10];
    char* sim1 = new char[3];
    ch[0]=NazwaKarty[0];
    ch[1]=NazwaKarty[1];
    ch[2]=NazwaKarty[2];
    sim[0]=ch[0];
    sim[1]=ch[1];
    sim[2]=ch[2];
    sim1[0]=sim[0];
    sim1[1]=sim[1];
    sim1[2]=sim[2];
    return sim;
}
