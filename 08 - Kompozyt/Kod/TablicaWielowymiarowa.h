#pragma once
#include "TablicaWypisywalna.h"
#include <vector>

// Klasa kompozytowa
class TablicaWielowymiarowa : public TablicaWypisywalna {
    std::vector<TablicaWypisywalna*> tablice;
public:
    void dodaj_tablice(TablicaWypisywalna* tab);
    void wypisz(bool enter = true);
};

