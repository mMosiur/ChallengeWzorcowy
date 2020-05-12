#include "Termostat.h"

Termostat::Termostat() : ogrzewanie(this), klimatyzacja(this), termometr(this), okno(this) {}

void Termostat::powiadom(Komponent* nadawca, std::string zdarzenie) {
    std::cout << zdarzenie << std::endl;
    if(zdarzenie == "Zmieniono temperatur�") {
        float r�nica = termometr.zmierz_temperatur�() - termometr.oczekiwana_temperatura;
        if(r�nica < -0.5) {
            ogrzewanie.zwi�ksz();
        } else if(r�nica > 0.5) {
            ogrzewanie.zmniejsz();
        }
    } else if(zdarzenie == "Otworzono okno") {
        klimatyzacja.zmniejsz();
    } else if(zdarzenie == "Zamkni�to okno") {
        klimatyzacja.zwi�ksz();
    } else {
        throw "Nieznane zdarzenie";
    }
}