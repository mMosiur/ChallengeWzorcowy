#include "Okno.h"

Okno::Okno(IMediator* mediator) : Komponent(mediator), otwarte(false) {}

void Okno::otw�rz() {
    if(otwarte) return;
    otwarte = true;
    mediator->powiadom(this, "Otworzono okno");
}

void Okno::zamknij() {
    if(!otwarte) return;
    otwarte = false;
    mediator->powiadom(this, "Zamkni�to okno");
}