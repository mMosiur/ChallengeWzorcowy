#include "Osoba.h"

Osoba::Osoba(unsigned wiek, P³eæ p³eæ, std::string imiê, std::string nazwisko) : wiek(wiek), p³eæ(p³eæ), imiê(imiê), nazwisko(nazwisko) {}

void Osoba::przedstaw_siê() {
    std::cout << "Jestem " << imiê << " " << nazwisko << ", lat " << wiek << std::endl;
}
