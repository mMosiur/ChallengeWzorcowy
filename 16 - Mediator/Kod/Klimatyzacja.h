#pragma once
#include "Komponent.h"
class Klimatyzacja : public Komponent {
public:
    float moc;
    Klimatyzacja(IMediator* mediator);
    void zwiêksz();
    void zmniejsz();
};

