#ifndef KRUPIER_H
#define KRUPIER_H

#include "talia.h"


class CKrupier
{
    public:
        CKrupier(int PrzyIluPas, CTalia* AdresTalii);
	virtual ~CKrupier();
	int Graj();
	int Zlicz();
	void PokazKarty();
    protected:
        CTalia* ptrTalia;
        CKarta* ptrTabKart[10];
        int IloscKartNaRece;
        int suma;
    private:
        int przyilupas;
};

#endif // COKOLWIEK_H

