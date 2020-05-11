#pragma once
#include <iostream>

enum class P³eæ { M, K };

class Osoba {
public:
    unsigned wiek;
    P³eæ p³eæ;
    std::string imiê;
    std::string nazwisko;

    Osoba(unsigned wiek, P³eæ p³eæ, std::string imiê, std::string nazwisko);

    void przedstaw_siê();
};

