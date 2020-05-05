#pragma once
#include "Noz.h"
#include <string>

class PlastikowyNoz : public Noz {
public:
    std::string material;
    void przekroj();
};