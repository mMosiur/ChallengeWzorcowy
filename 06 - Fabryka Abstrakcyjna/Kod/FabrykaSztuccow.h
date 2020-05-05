#pragma once
#include "Noz.h"
#include "Widelec.h"

class FabrykaSztuccow {
public:
    virtual Noz* produkujNoz() = 0;
    virtual Widelec* produkujWidelec() = 0;
};