#include "Osoba.h"

Osoba::Osoba(unsigned wiek, P�e� p�e�, std::string imi�, std::string nazwisko) : wiek(wiek), p�e�(p�e�), imi�(imi�), nazwisko(nazwisko) {}

void Osoba::przedstaw_si�() {
    std::cout << "Jestem " << imi� << " " << nazwisko << ", lat " << wiek << std::endl;
}
