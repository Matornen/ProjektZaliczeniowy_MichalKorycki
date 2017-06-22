#ifndef GRACZ_H
#define GRACZ_H

#include "krupier.h"


class CGracz : public CKrupier
{
    public:
        CGracz(int PrzyIluPasKrupier, CTalia* AdresTalii, int kredyty);
        virtual ~CGracz();
        int Graj();
        int Kredyty();
        void Przegrana();
        void Wygrana();
        void DodajKredyty();
    protected:
    private:
};

#endif // COKOLWIEK_H

