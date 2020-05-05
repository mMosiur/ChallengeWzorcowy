#pragma once
#include "FabrykaSztuccow.h"
#include <string>

class FabrykaSztuccowPlastikowych : public FabrykaSztuccow {
public:
    std::string material;
    Noz* produkujNoz();
    Widelec* produkujWidelec();
    FabrykaSztuccowPlastikowych(std::string material);
};