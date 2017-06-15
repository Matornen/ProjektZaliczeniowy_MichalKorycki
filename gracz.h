#ifndef GRACZ_H
#define GRACZ_H

#include "krupier.h"


class CGracz : public CKrupier
{
    public:
        CGracz(int PrzyIluPasKrupier, CTalia* AdresTalii);
        virtual ~CGracz();
        int Graj();
    protected:
    private:
};

#endif // COKOLWIEK_H

