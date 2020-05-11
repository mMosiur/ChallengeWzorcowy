#include "PolecenieKapitalizuj.h"

PolecenieKapitalizuj::PolecenieKapitalizuj(Tekst* tekst) : tekst(tekst), pierwowz�r(Tekst(*tekst)) {}

void PolecenieKapitalizuj::wykonaj() {
    for(int i = 0; i < tekst->zawartosc.size(); i++) {
        if(97 <= tekst->zawartosc[i] && tekst->zawartosc[i] <= 122) tekst->zawartosc[i] -= 32;
    }
}

void PolecenieKapitalizuj::wycofaj() {
    tekst->zawartosc = pierwowz�r.zawartosc;
}
