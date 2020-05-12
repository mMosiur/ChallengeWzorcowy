#include "Termostat.h"

Termostat::Termostat() : ogrzewanie(this), klimatyzacja(this), termometr(this), okno(this) {}

void Termostat::powiadom(Komponent* nadawca, std::string zdarzenie) {
    std::cout << zdarzenie << std::endl;
    if(zdarzenie == "Zmieniono temperaturê") {
        float ró¿nica = termometr.zmierz_temperaturê() - termometr.oczekiwana_temperatura;
        if(ró¿nica < -0.5) {
            ogrzewanie.zwiêksz();
        } else if(ró¿nica > 0.5) {
            ogrzewanie.zmniejsz();
        }
    } else if(zdarzenie == "Otworzono okno") {
        klimatyzacja.zmniejsz();
    } else if(zdarzenie == "Zamkniêto okno") {
        klimatyzacja.zwiêksz();
    } else {
        throw "Nieznane zdarzenie";
    }
}