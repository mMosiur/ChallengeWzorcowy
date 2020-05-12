#include "Ogrzewanie.h"

Ogrzewanie::Ogrzewanie(IMediator* mediator) : Komponent(mediator), moc(0.0) {}

void Ogrzewanie::zwi�ksz() {
    moc += 0.1;
    if(moc > 1.0) moc = 1.0;
    else std::cout << "Zwi�kszono moc ogrzewania" << std::endl;
}

void Ogrzewanie::zmniejsz() {
    moc -= 0.1;
    if(moc < 0.0) moc = 0.0;
    else std::cout << "Zmniejszono moc ogrzewania" << std::endl;
}
