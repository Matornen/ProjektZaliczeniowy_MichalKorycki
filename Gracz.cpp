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
			cout << "Masz w kartach: " << suma << endl;
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
                cout<<"Dodano 50000 kredytów. Stan konta: "<<kasa<<endl;
                xt=1;
            }
            else if (strcmp(x,"Hopal")==0)
            {
            std::cout<<"Hopal For Opal!"<<std::endl;
            xt=1;
            }
            else if (strcmp(x, "Porada")==0)
            {
            Porada();
            }
            else return 1;
			} while (xt!=0);
		}
}

int CGracz::Kredyty()
{
    return kasa;
}

void CGracz::Przegrana(int stawka)
{
    kasa-=stawka;
}

void CGracz::Wygrana(int stawka)
{
    kasa+=stawka;
}

void CGracz::DodajKredyty()
{
    kasa+=50000;
}

int CGracz::Postaw()
{
    int stawka;
    do {
        if (std::cin.fail() == 1)
            {
                std::cin.clear(); //
                std::cin.ignore();//
            }
            std::cin >> stawka;
        } while (std::cin.good() == 0 || stawka<0 || stawka>kasa);
    return stawka;
}

void CGracz::Porada()
{
    std::cout<<"Najlepsza strategia na gre w kasynie jest wyjscie z kasyna. [Porada w budowie jako DLC]"<<std::endl;
}
