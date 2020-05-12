#pragma once
#include <iostream>
#include <vector>
#include "IMediator.h"
#include "Ogrzewanie.h"
#include "Klimatyzacja.h"
#include "Termometr.h"
#include "Okno.h"

class Termostat : public IMediator {
public:
    Ogrzewanie ogrzewanie;
    Klimatyzacja klimatyzacja;
    Termometr termometr;
    Okno okno;

    Termostat();
    
    void powiadom(Komponent* nadawca, std::string zdarzenie);
};

