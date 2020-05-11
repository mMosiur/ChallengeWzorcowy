#include "PolecenieZaktualizuj.h"

PolecenieZaktualizuj::PolecenieZaktualizuj(Wyswietlacz* wyswietlacz) : wyswietlacz(wyswietlacz) {}

void PolecenieZaktualizuj::wykonaj() {
    wyswietlacz->wyswietl();
}

void PolecenieZaktualizuj::wycofaj() {
    throw "Polecenie nie obs³uguje wycofywania";
}
