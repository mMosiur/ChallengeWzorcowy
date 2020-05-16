#pragma once
#include "StanBrakDanych.h"
#include "Kontekst.h"
#include "StanPodanoImiê.h"
#include "StanPodanoNazwisko.h"
#include "StanPodanoDane.h"

class Kontekst {
public:
    StanDanych* stan;
    std::string imiê;
    std::string nazwisko;
    Kontekst();
    void wczytaj_imiê();
    void wczytaj_nazwisko();
    void wypisz_dane();
};

