#include "PrzeszukiwanieDrzewa.h"

bool PrzeszukiwanieDrzewa::szukaj(W�ze�Drzewa* korze�, int warto��) {
    dodaj_do_listy(korze�);
    while(!przeszukiwane.empty()) {
        W�ze�Drzewa* w�ze� = we�_nast�pny();
        if(w�ze�->warto�� == warto��) return true;
        dodaj_syn�w_do_listy(w�ze�);
    }
    return false;
}

void PrzeszukiwanieDrzewa::dodaj_do_listy(W�ze�Drzewa* w�ze�) {
    przeszukiwane.push_back(w�ze�);
}

void PrzeszukiwanieDrzewa::dodaj_syn�w_do_listy(W�ze�Drzewa* w�ze�) {
    W�ze�Drzewa* syn = w�ze�->lewy_syn;
    while(syn != nullptr) {
        dodaj_do_listy(syn);
        syn = syn->prawy_brat;
    }
}
