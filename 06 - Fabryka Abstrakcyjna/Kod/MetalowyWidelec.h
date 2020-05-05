#pragma once
#include "Widelec.h"
#include <string>

class MetalowyWidelec : public Widelec {
public:
    std::string material;
    void nabij();
};