#include "PolecenieOdwroc.h"

PolecenieOdwroc::PolecenieOdwroc(Tekst* tekst) : tekst(tekst), pierwowzór(Tekst(*tekst)) {}

void PolecenieOdwroc::wykonaj() {
    int size = tekst->zawartosc.size();
    for(int i = 0; i < size/2; i++) {
        std::swap(tekst->zawartosc[i], tekst->zawartosc[size - 1 - i]);
    }
}

void PolecenieOdwroc::wycofaj() {
    tekst->zawartosc = pierwowzór.zawartosc;
}
