#pragma once
#include "Komponent.h"
class Ogrzewanie : public Komponent {
public:
    float moc;
    Ogrzewanie(IMediator* mediator);
    void zwi�ksz();
    void zmniejsz();
};

