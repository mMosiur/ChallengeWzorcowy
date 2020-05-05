#pragma once
#include "FabrykaSztuccow.h"
#include <string>

class FabrykaSztuccowMetalowych : public FabrykaSztuccow {
public:
    std::string material;
    Noz* produkujNoz();
    Widelec* produkujWidelec();
    FabrykaSztuccowMetalowych(std::string material);
};