#pragma once
#include <list>
#include "W�ze�Drzewa.h"

class PrzeszukiwanieDrzewa {
public:
    std::list<W�ze�Drzewa*> przeszukiwane;
    bool szukaj(W�ze�Drzewa* korze�, int warto��);
    void dodaj_do_listy(W�ze�Drzewa* w�ze�);
    void dodaj_syn�w_do_listy(W�ze�Drzewa* w�ze�);
    virtual W�ze�Drzewa* we�_nast�pny() = 0;
};

