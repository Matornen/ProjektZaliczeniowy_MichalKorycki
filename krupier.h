#ifndef KRUPIER_H
#define KRUPIER_H

#include "talia.h"


class CKrupier
{
    public:
        CKrupier(int PrzyIluPas, CTalia* AdresTalii, int kredytygracza);
	virtual ~CKrupier();
	int Graj();
	int Zlicz();
	int kasa;
	void PokazKarty();
	void ClearHand();
    protected:
        CTalia* ptrTalia;
        CKarta* ptrTabKart[10];
        int IloscKartNaRece;
        int suma;

    private:
        int przyilupas;
};

#endif // COKOLWIEK_H

