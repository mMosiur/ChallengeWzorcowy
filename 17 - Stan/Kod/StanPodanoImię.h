#pragma once
#include "StanDanych.h"

class StanPodanoImiê : public StanDanych {
public:
    void podaj_imiê(Kontekst* kontekst, std::string imiê);
    void podaj_nazwisko(Kontekst* kontekst, std::string nazwisko);
    void wypisz_imiê(Kontekst* kontekst);
    void wypisz_nazwisko(Kontekst* kontekst);
    void wypisz_dane(Kontekst* kontekst);
};

