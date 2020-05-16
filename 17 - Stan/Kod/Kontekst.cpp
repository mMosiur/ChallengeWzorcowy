#include "Kontekst.h"

Kontekst::Kontekst() : stan(new StanBrakDanych) {}

void Kontekst::wczytaj_imi�() {
    std::cout << "Podaj imi�: ";
    std::string imi�;
    std::cin >> imi�;
    stan->podaj_imi�(this, imi�);
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
