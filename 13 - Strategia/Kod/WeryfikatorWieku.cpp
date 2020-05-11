#include "WeryfikatorWieku.h"

bool WeryfikatorWieku::weryfikuj(Osoba* osoba) {
    return osoba->wiek >= 18;
}
