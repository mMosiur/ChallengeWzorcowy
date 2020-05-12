#pragma once
#include <string>
class Komponent;

class IMediator {
public:
    virtual void powiadom(Komponent* nadawca, std::string zdarzenie) = 0;
};

