#pragma once
#include "Komponent.h"
class Okno : public Komponent {
public:
    bool otwarte;

    Okno(IMediator* mediator);

    void otw�rz();

    void zamknij();
};

