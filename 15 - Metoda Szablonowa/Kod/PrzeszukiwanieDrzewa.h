#pragma once
#include <list>
#include "Wêze³Drzewa.h"

class PrzeszukiwanieDrzewa {
public:
    std::list<Wêze³Drzewa*> przeszukiwane;
    bool szukaj(Wêze³Drzewa* korzeñ, int wartoœæ);
    void dodaj_do_listy(Wêze³Drzewa* wêze³);
    void dodaj_synów_do_listy(Wêze³Drzewa* wêze³);
    virtual Wêze³Drzewa* weŸ_nastêpny() = 0;
};

