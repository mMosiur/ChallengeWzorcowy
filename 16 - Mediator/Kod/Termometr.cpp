#include "Termometr.h"

Termometr::Termometr(IMediator* mediator) : Komponent(mediator), oczekiwana_temperatura(18.5) {}

void Termometr::ustaw_temperatur�(float temperatura) {
    if(oczekiwana_temperatura == temperatura) return;
    oczekiwana_temperatura = temperatura;
    mediator->powiadom(this, "Zmieniono temperatur�");
}

float Termometr::zmierz_temperatur�() {
    float temp = 15.0 + float(rand() % 50) / 10;
    std::cout << "Zmierzono temperatur� " << temp << std::endl;
    return temp;
}
