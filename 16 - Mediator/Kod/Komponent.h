#pragma once
#include "IMediator.h"
#include <iostream>

class Komponent {
protected:
    IMediator* mediator;
public:
    Komponent(IMediator* mediator);
};

