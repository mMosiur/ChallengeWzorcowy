#pragma once
#include <iostream>

enum class P�e� { M, K };

class Osoba {
public:
    unsigned wiek;
    P�e� p�e�;
    std::string imi�;
    std::string nazwisko;

    Osoba(unsigned wiek, P�e� p�e�, std::string imi�, std::string nazwisko);

    void przedstaw_si�();
};

