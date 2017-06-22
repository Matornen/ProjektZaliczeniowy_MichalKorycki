#include "Scheduler.h"



CScheduler::CScheduler(int przyIluPasKrupier, int Kredyty)
{
	Talia = new CTalia;
	Gracz = new CGracz(przyIluPasKrupier, Talia->DajAdres(), Kredyty);
	Krupier = new CKrupier(przyIluPasKrupier, Talia->DajAdres(), Kredyty);
}


CScheduler::~CScheduler()
{
	delete Gracz;
	Gracz = 0;//tych nie trzeba
	delete Talia;
	Talia = 0;
	delete Krupier;
	Krupier = 0;
}


void CScheduler::Run()
{
    //Talia->DrukujTalie();
    int Gra=1;
    while (Gracz->kasa>0)
    {
	Talia->Tasuj();
	//Talia->DrukujTalie();
	int x=1,y=1;// krupier musi na poczatku wziac karte

	int Tura=1;
	std::cout<<"Masz "<<Gracz->kasa<<" kredytow."<<std::endl;
	std::cout<<"Ile chcesz postawic?"<<std::endl;
	int stawka=Gracz->Postaw();
	do//Obaj musza dostac jadna karte !
	{
		std::cout << "Tura nr: " << Tura << "\n";
		if (x == 1)// Krupier gra wtedy co ja gram albo  pasuje wtedy co ja
			// pasuje, tez wtedy kiedy ma >PrzyIluPasKrupier
		{
			x = Krupier->Graj();
		}
		if (y!=0)
        {
		y = Gracz->Graj();
        }
		Tura++;
	} while (x!=0 || y!=0);//zwroci 0 albo 1;

	if (y == 0)//Kto wygra³???
	{
	    std::cout<<"Krupier: "<<Krupier->Zlicz()<<". Gracz: "<<Gracz->Zlicz()<<std::endl;
	    if(Krupier->Zlicz()>21 && Gracz->Zlicz()>21)
        {
            std::cout << "Wszyscy przegrali.\n";
        }
        else if (Krupier->Zlicz()>21)
        {
            std::cout << "Wygral gracz!\n";
            Gracz->Wygrana(stawka);
        }
        else if(Gracz->Zlicz() > 21)
			{
			std::cout << "Wygral Krupier!\n";
			Gracz->Przegrana(stawka);

			}
		else if(Gracz->Zlicz()>Krupier->Zlicz())
		{
			std::cout << "Wygral Gracz!\n";
			Gracz->Wygrana(stawka);

		}
		else if(Gracz->Zlicz()==Krupier->Zlicz())
		{
			std::cout << "REMIS\n";

		}
		else
        {
        std::cout << "Wygral Krupier!\n";
		Gracz->Przegrana(stawka);
        }
	}
	Gracz->ClearHand();
	Krupier->ClearHand();
	Gra++;
    }
    std::cout<<"Koniec gry. Liczba rozegranych rund: "<<Gra-1<<std::endl;
}

