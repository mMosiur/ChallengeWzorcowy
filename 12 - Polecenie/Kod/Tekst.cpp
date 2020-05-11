#include "Tekst.h"


Tekst::Tekst(std::string tekst) : zawartosc(tekst) {}

void Tekst::wypisz() {
    std::cout << zawartosc << '\n';
}
