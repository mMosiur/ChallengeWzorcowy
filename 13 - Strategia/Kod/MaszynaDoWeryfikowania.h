#pragma once
#include "Weryfikator.h"
#include "WeryfikatorP³ci.h"
#include "WeryfikatorWieku.h"

class MaszynaDoWeryfikowania {
    Weryfikator* weryfikator;
public:
    MaszynaDoWeryfikowania();
    void ustaw_weryfikator(Weryfikator* nowy_weryfikator);
    bool weryfikuj(Osoba* osoba);
};

