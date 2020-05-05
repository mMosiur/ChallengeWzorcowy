#include "TablicaJednowymiarowa.h"
#include "TablicaWielowymiarowa.h"

int main() {
    TablicaJednowymiarowa tab1,tab2,tab3; // "Liście" wzorca
    tab1.dodaj_element({ 1 });
    tab1.dodaj_element({ 2 });
    tab2.dodaj_element({ 3 });
    tab2.dodaj_element({ 4 });
    tab3.dodaj_element({ 5 });
    tab3.dodaj_element({ 6 });
    TablicaWielowymiarowa tabw1, tabw2; // Obiekty kompozytowe wzorca
    tabw1.dodaj_tablice(&tab1);
    tabw1.dodaj_tablice(&tab2);
    tabw2.dodaj_tablice(&tab3);
    tabw2.dodaj_tablice(&tabw1);
    std::vector<TablicaWypisywalna*> tablice; // Wskaźniki klasy interfejsu
    tablice.push_back(&tab1);
    tablice.push_back(&tab2);
    tablice.push_back(&tab3);
    tablice.push_back(&tabw1);
    tablice.push_back(&tabw2);
    for(auto& tablica : tablice){
        tablica->wypisz();
    }
    return 0;
}