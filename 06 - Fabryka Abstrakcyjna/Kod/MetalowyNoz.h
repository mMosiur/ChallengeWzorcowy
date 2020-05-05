#pragma once
#include "Noz.h"
#include <string>

class MetalowyNoz : public Noz {
public:
    std::string material;
    void przekroj();
};