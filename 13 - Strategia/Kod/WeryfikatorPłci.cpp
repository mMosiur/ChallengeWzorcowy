#include "WeryfikatorP³ci.h"

bool WeryfikatorP³ci::weryfikuj(Osoba* osoba) {
    return osoba->p³eæ == P³eæ::K;
}
