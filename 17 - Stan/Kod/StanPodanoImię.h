#pragma once
#include "StanDanych.h"

class StanPodanoImi� : public StanDanych {
public:
    void podaj_imi�(Kontekst* kontekst, std::string imi�);
    void podaj_nazwisko(Kontekst* kontekst, std::string nazwisko);
    void wypisz_imi�(Kontekst* kontekst);
    void wypisz_nazwisko(Kontekst* kontekst);
    void wypisz_dane(Kontekst* kontekst);
};

