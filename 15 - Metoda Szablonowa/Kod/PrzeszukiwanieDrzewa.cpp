#include "PrzeszukiwanieDrzewa.h"

bool PrzeszukiwanieDrzewa::szukaj(Wêze³Drzewa* korzeñ, int wartoœæ) {
    dodaj_do_listy(korzeñ);
    while(!przeszukiwane.empty()) {
        Wêze³Drzewa* wêze³ = weŸ_nastêpny();
        if(wêze³->wartoœæ == wartoœæ) return true;
        dodaj_synów_do_listy(wêze³);
    }
    return false;
}

void PrzeszukiwanieDrzewa::dodaj_do_listy(Wêze³Drzewa* wêze³) {
    przeszukiwane.push_back(wêze³);
}

void PrzeszukiwanieDrzewa::dodaj_synów_do_listy(Wêze³Drzewa* wêze³) {
    Wêze³Drzewa* syn = wêze³->lewy_syn;
    while(syn != nullptr) {
        dodaj_do_listy(syn);
        syn = syn->prawy_brat;
    }
}
