#pragma once
#include <iostream>
class Kontekst;

class StanDanych {
public:
    virtual void podaj_imiê(Kontekst* kontekst, std::string imiê) = 0;
    virtual void podaj_nazwisko(Kontekst* kontekst, std::string nazwisko) = 0;
    virtual void wypisz_imiê(Kontekst* kontekst) = 0;
    virtual void wypisz_nazwisko(Kontekst* kontekst) = 0;
    virtual void wypisz_dane(Kontekst* kontekst) = 0;
    friend class Kontekst;
};