#pragma once
#include "Komponent.h"
class Termometr : public Komponent {
public:
    float oczekiwana_temperatura;

    Termometr(IMediator* mediator);

    void ustaw_temperatur�(float temperatura);

    float zmierz_temperatur�();
};

