#include "Komorka.h"

Prototyp* Komorka::clone() {
    return new Komorka(this->dna);
}

bool Komorka::zgodne_dna(Komorka* komorka) {
    return this->dna == komorka->dna;
}

Komorka::Komorka(const std::string& dna) : dna(dna) {}
