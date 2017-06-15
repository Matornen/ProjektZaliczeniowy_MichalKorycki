#include "Scheduler.h"



CScheduler::CScheduler(int przyIluPasKrupier)
{
	Talia = new CTalia;
	Gracz = new CGracz(przyIluPasKrupier, Talia->DajAdres());
	Krupier = new CKrupier(przyIluPasKrupier, Talia->DajAdres());
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
	Talia->DrukujTalie();
	Talia->Tasuj();
	Talia->DrukujTalie();
	int x=1,y;// krupier musi na poczatku wziac karte
	int Tura=1;
	do//Obaj musza dostac jadna karte !
	{
		std::cout << "Tura nr: " << Tura << "\n";
		if (x == 1)// Krupier gra wtedy co ja gram albo  pasuje wtedy co ja
			// pasuje, tez wtedy kiedy ma >PrzyIluPasKrupier
		{
			x = Krupier->Graj();
			if (Krupier->Zlicz() > 21)
			{
				std::cout << "Wygral gracz!\n";
				break;
			}
		}
		else std::cout << "Krupier: Masz w kartach: " << Krupier->Zlicz() << std::endl;
		Tura++;
	} while (y=Gracz->Graj());//zwroci 0 albo 1;

	if (y == 0)//Kto wygra³???
	{
		if(Gracz->Zlicz() > 21)
			std::cout << "Wygral Krupier!\n";
		else if(Gracz->Zlicz()>Krupier->Zlicz())
		{
			std::cout << "Wygral Gracz!\n";
		}
		else if(Gracz->Zlicz()==Krupier->Zlicz())
		{
			std::cout << "REMIS\n";
		}
		else std::cout << "Wygral Krupier!\n";
	}
}

