#include "Gracz.h"
#include "string.h"



CGracz::CGracz(int x, CTalia* y, int z)
	:CKrupier(x,y,z)//lista inicjalizacyjna - BO DZIEDZICZENIE !
{

}

CGracz::~CGracz()
{}

int CGracz::Graj()
{
		using namespace std;

		ptrTabKart[IloscKartNaRece++] = ptrTalia->DajKarte();
		Zlicz();//wywoluje podliczanie kart
		cout<<"Masz na rece: ";
        PokazKarty();
		if (suma > 21)
		{
			cout << "Masz w kartach: " << suma << " PRZEGRALES !!" << endl;
			return 0;
		}
		else
		{
			cout << "Masz w kartach: " << suma << endl
				<< "Czy chcesz grac dalej ? !0 - tak, 0 - nie" << endl;
			char x[10];
			int xt=1;
			do
            {
				cin >> x;
			if(strcmp(x,"0")==0)
            {
                return 0;
            }
            else if (strcmp(x, "motherlode")==0)
            {
                DodajKredyty();
                cout<<"Dodano 50000 kredyt�w. Stan konta: "<<kasa<<endl;
                xt=1;
            }
            else if (strcmp(x,"Hopal")==0)
            {
            std::cout<<"Hopal For Opal!"<<std::endl;
            xt=1;
            }
            else return 1;

			} while (xt!=0);
		}
}

int CGracz::Kredyty()
{
    return kasa;
}

void CGracz::Przegrana()
{
    kasa-=10000;
}

void CGracz::Wygrana()
{
    kasa+=10000;
}

void CGracz::DodajKredyty()
{
    kasa+=50000;
}
