#ifndef SCHEDULER_H
#define SCHEDULER_H
#include "Gracz.h"
#include "Krupier.h"
#include "talia.h"

class CScheduler
{
private:
	CGracz* Gracz;
	CKrupier* Krupier;
	CTalia* Talia;
public:
	CScheduler(int przyIluPasKrupier=17, int Kredyty=50000);
	~CScheduler();
	void Run();
};

#endif // SCHEDULER_H

