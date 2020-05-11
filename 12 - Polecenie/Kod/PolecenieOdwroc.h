#pragma once
#include "IPolecenie.h"
#include "Tekst.h"

class PolecenieOdwroc : public IPolecenie {
    Tekst* tekst;
    const Tekst pierwowz�r;
public:
    PolecenieOdwroc(Tekst* tekst);
    void wykonaj();
    void wycofaj();
};

