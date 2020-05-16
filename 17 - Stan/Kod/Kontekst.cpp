#include "Kontekst.h"

Kontekst::Kontekst() : stan(new StanBrakDanych) {}

void Kontekst::wczytaj_imiê() {
    std::cout << "Podaj imiê: ";
    std::string imiê;
    std::cin >> imiê;
    stan->podaj_imiê(this, imiê);
}

void Kontekst::wczytaj_nazwisko() {
    std::cout << "Podaj nazwisko: ";
    std::string nazwisko;
    std::cin >> nazwisko;
    stan->podaj_nazwisko(this, nazwisko);
}

void Kontekst::wypisz_dane() {
    stan->wypisz_dane(this);
}
