#include "Krupier.h"



CKrupier::CKrupier(int x, CTalia* AdresTalii)
{
	IloscKartNaRece = 0;
	suma = 0;
	przyilupas = x;
	ptrTalia = AdresTalii;
}


CKrupier::~CKrupier()
{
}
int CKrupier::Graj()
{
	using namespace std;
	ptrTabKart[IloscKartNaRece++] = ptrTalia->DajKarte();
	Zlicz();
	if (suma > 21)
	{
		cout << "Krupier: Masz w kartach: " << suma <<" PRZEGRALES !!"<< endl;
		return 0;
	}
	else if (suma >= przyilupas)
	{
		cout << "Krupier: Masz w kartach: " << suma << endl;
		return 0;
	}
	else
	{
		cout << "Krupier: Masz w kartach: " << suma << endl;
		return 1;
	}


}

int CKrupier::Zlicz()
{
	suma = 0;
	for (int i = 0; i < IloscKartNaRece; i++)//Ile masz na rêce
	{
		suma += ptrTabKart[i]->DajWartosc();
	}//koniec FOR
	return suma;
}

void CKrupier::PokazKarty()
    {
        using namespace std;
        for (int i=0; i<IloscKartNaRece; i++)
        {
            cout<<ptrTabKart[i]->PokazKarte()<<" ";
        }
        cout<<endl;
    }
