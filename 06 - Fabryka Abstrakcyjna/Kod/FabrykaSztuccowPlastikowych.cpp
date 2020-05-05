#include "FabrykaSztuccowPlastikowych.h"
#include "PlastikowyNoz.h"
#include "PlastikowyWidelec.h"

Noz* FabrykaSztuccowPlastikowych::produkujNoz() {
    PlastikowyNoz* Noz = new PlastikowyNoz;
    Noz->material = this->material;
    return Noz;
}

Widelec* FabrykaSztuccowPlastikowych::produkujWidelec() {
    PlastikowyWidelec* widelec = new PlastikowyWidelec;
    widelec->material = this->material;
    return widelec;
}

FabrykaSztuccowPlastikowych::FabrykaSztuccowPlastikowych(std::string material) : material(material) {}