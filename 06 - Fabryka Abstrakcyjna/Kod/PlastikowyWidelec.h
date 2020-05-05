#pragma once
#include "Widelec.h"
#include <string>

class PlastikowyWidelec : public Widelec {
public:
    std::string material;
    void nabij();
};