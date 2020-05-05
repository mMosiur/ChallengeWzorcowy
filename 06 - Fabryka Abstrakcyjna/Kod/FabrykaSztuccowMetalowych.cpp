#include "FabrykaSztuccowMetalowych.h"
#include "MetalowyNoz.h"
#include "MetalowyWidelec.h"

Noz* FabrykaSztuccowMetalowych::produkujNoz() {
    MetalowyNoz* Noz = new MetalowyNoz;
    Noz->material = this->material;
    return Noz;
}

Widelec* FabrykaSztuccowMetalowych::produkujWidelec() {
    MetalowyWidelec* widelec = new MetalowyWidelec;
    widelec->material = this->material;
    return widelec;
}

FabrykaSztuccowMetalowych::FabrykaSztuccowMetalowych(std::string material) : material(material) {}