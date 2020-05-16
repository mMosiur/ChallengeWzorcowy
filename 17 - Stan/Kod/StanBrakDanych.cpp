#include "StanBrakDanych.h"
#include "Kontekst.h"

void StanBrakDanych::podaj_imiê(Kontekst* kontekst, std::string imiê) {
    kontekst->imiê = imiê;
    kontekst->stan = new StanPodanoImiê;
    delete this;
}

void StanBrakDanych::podaj_nazwisko(Kontekst* kontekst, std::string nazwisko) {
    kontekst->nazwisko = nazwisko;
    kontekst->stan = new StanPodanoNazwisko;
    delete this;
}

void StanBrakDanych::wypisz_imiê(Kontekst* kontekst) {
    std::cout << "Brak podanego imienia do wypisania" << std::endl;
}

void StanBrakDanych::wypisz_nazwisko(Kontekst* kontekst) {
    std::cout << "Brak podanego nazwiska do wypisania" << std::endl;
}

void StanBrakDanych::wypisz_dane(Kontekst* kontekst) {
    std::cout << "Brak podanych danych do wypisania" << std::endl;
}
