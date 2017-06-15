#include "Gracz.h"



CGracz::CGracz(int x, CTalia* y)
	:CKrupier(x,y)//lista inicjalizacyjna - BO DZIEDZICZENIE !
{
}

CGracz::~CGracz()
{}

int CGracz::Graj()
{

		using namespace std;
		ptrTabKart[IloscKartNaRece++] = ptrTalia->DajKarte();
		Zlicz();//wywoluje podliczanie kart

		if (suma > 21)
		{
			cout << "Masz w kartach: " << suma << " PRZEGRALES !!" << endl;
			return 0;
		}
		else
		{
			cout << "Masz w kartach: " << suma << endl
				<< "Czy chcesz grac dalej ? !0 - tak, 0 - nie" << endl;
			int x = 3;
			do {
				if (cin.fail() == 1)
				{
					cin.clear(); // najlpierw czyszcze flage
					cin.ignore();// potem ignoruje to co w buferze Cin
				}
				cin >> x;
				//jesli podano zle
			} while (cin.good() == 0 );//sprawdzam czy gut
			return x;
		}
}




