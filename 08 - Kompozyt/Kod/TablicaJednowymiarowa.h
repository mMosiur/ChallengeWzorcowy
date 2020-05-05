#pragma once
#include "TablicaWypisywalna.h"
#include <iostream>
#include <vector>

// Struktura elementu "liścia", atritralna
struct Element {
    int value;
    friend std::ostream& operator<<(std::ostream& os, const Element& el);
};

// Klasa "liścia" wzorca, pojedynczych elementów
class TablicaJednowymiarowa : public TablicaWypisywalna {
    std::vector<Element> elements;
public:
    void dodaj_element(Element&& el);
    void wypisz(bool enter = true);
};

