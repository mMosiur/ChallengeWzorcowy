#pragma once
#include "IPolecenie.h"
#include "Wyswietlacz.h"

class PolecenieZaktualizuj : public IPolecenie {
    Wyswietlacz* wyswietlacz;
public:
	PolecenieZaktualizuj(Wyswietlacz* wyswietlacz);
    void wykonaj();
    void wycofaj();
};

