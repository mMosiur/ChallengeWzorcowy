#include "Termometr.h"

Termometr::Termometr(IMediator* mediator) : Komponent(mediator), oczekiwana_temperatura(18.5) {}

void Termometr::ustaw_temperaturê(float temperatura) {
    if(oczekiwana_temperatura == temperatura) return;
    oczekiwana_temperatura = temperatura;
    mediator->powiadom(this, "Zmieniono temperaturê");
}

float Termometr::zmierz_temperaturê() {
    float temp = 15.0 + float(rand() % 50) / 10;
    std::cout << "Zmierzono temperaturê " << temp << std::endl;
    return temp;
}
