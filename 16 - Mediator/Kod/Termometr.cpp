#include "Termometr.h"

Termometr::Termometr(IMediator* mediator) : Komponent(mediator), oczekiwana_temperatura(18.5) {}

void Termometr::ustaw_temperaturÍ(float temperatura) {
    if(oczekiwana_temperatura == temperatura) return;
    oczekiwana_temperatura = temperatura;
    mediator->powiadom(this, "Zmieniono temperaturÍ");
}

float Termometr::zmierz_temperaturÍ() {
    float temp = 15.0 + float(rand() % 50) / 10;
    std::cout << "Zmierzono temperaturÍ " << temp << std::endl;
    return temp;
}
