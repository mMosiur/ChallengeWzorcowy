#include "Klimatyzacja.h"

Klimatyzacja::Klimatyzacja(IMediator* mediator) : Komponent(mediator), moc(0.0) {}

void Klimatyzacja::zwiêksz() {
    moc += 0.1;
    if(moc > 1.0) moc = 1.0;
    else std::cout << "Zwiêkszono moc klimatyzacji" << std::endl;
}

void Klimatyzacja::zmniejsz() {
    moc -= 0.1;
    if(moc < 0.0) moc = 0.0;
    else std::cout << "Zmniejszono moc klimatyzacji" << std::endl;
}
