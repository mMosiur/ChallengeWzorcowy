#pragma once
#include "IPolecenie.h"
#include "Tekst.h"

class PolecenieKapitalizuj : public IPolecenie {
    Tekst* tekst;
    const Tekst pierwowz�r;
public:
    PolecenieKapitalizuj(Tekst* tekst);
    void wykonaj();
    void wycofaj();
};

