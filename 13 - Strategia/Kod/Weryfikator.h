#pragma once
#include "Osoba.h"

class Weryfikator {
public:
    virtual bool weryfikuj(Osoba* osoba) = 0;
};

