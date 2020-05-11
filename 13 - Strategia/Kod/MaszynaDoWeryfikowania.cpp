#include "MaszynaDoWeryfikowania.h"

MaszynaDoWeryfikowania::MaszynaDoWeryfikowania() : weryfikator(nullptr) {}

void MaszynaDoWeryfikowania::ustaw_weryfikator(Weryfikator* nowy_weryfikator) {
    if(weryfikator) delete weryfikator;
    weryfikator = nowy_weryfikator;
}

bool MaszynaDoWeryfikowania::weryfikuj(Osoba* osoba) {
    if(weryfikator) {
        return weryfikator->weryfikuj(osoba);
    } else {
        throw "Brak ustawionego weryfikatora";
    }
}
