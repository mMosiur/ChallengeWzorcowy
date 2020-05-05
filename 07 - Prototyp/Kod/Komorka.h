#pragma once
#include "Prototyp.h"
#include <string>
class Komorka : public Prototyp {
private:
    std::string dna;
public:
    Prototyp* clone();
    bool zgodne_dna(Komorka* komorka);
    Komorka(const std::string& dna);
};

