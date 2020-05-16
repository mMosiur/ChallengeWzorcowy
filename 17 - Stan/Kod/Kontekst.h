#pragma once
#include "StanBrakDanych.h"
#include "Kontekst.h"
#include "StanPodanoImi�.h"
#include "StanPodanoNazwisko.h"
#include "StanPodanoDane.h"

class Kontekst {
public:
    StanDanych* stan;
    std::string imi�;
    std::string nazwisko;
    Kontekst();
    void wczytaj_imi�();
    void wczytaj_nazwisko();
    void wypisz_dane();
};

