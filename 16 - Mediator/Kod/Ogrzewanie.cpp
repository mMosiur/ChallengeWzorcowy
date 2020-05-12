#include "Ogrzewanie.h"

Ogrzewanie::Ogrzewanie(IMediator* mediator) : Komponent(mediator), moc(0.0) {}

void Ogrzewanie::zwiêksz() {
    moc += 0.1;
    if(moc > 1.0) moc = 1.0;
    else std::cout << "Zwiêkszono moc ogrzewania" << std::endl;
}

void Ogrzewanie::zmniejsz() {
    moc -= 0.1;
    if(moc < 0.0) moc = 0.0;
    else std::cout << "Zmniejszono moc ogrzewania" << std::endl;
}
