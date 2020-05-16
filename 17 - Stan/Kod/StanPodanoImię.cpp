#include "StanPodanoImiê.h"
#include "Kontekst.h"

void StanPodanoImiê::podaj_imiê(Kontekst* kontekst, std::string imiê) {
    std::cout << "Imiê zosta³o ju¿ podane. Czy chcesz je zmieniæ na '" << imiê << "'? (tak/nie) - ";
    std::string odpowiedŸ = "";
    while(odpowiedŸ == "") {
        std::cin >> odpowiedŸ;
        if(odpowiedŸ == "tak") {
            kontekst->imiê = imiê;
        } else if(odpowiedŸ != "nie") {
            odpowiedŸ = "";
            std::cout << "B³êdne wejœcie. Czy chcesz zmieniæ imiê na '" << imiê << "'? (tak/nie) - ";
        }
    }
}

void StanPodanoImiê::podaj_nazwisko(Kontekst* kontekst, std::string nazwisko) {
    kontekst->nazwisko = nazwisko;
    kontekst->stan = new StanPodanoDane;
    delete this;
}

void StanPodanoImiê::wypisz_imiê(Kontekst* kontekst) {
    std::cout << kontekst->imiê << std::endl;
}

void StanPodanoImiê::wypisz_nazwisko(Kontekst* kontekst) {
    std::cout << "Brak podanego nazwiska do wypisania" << std::endl;
}

void StanPodanoImiê::wypisz_dane(Kontekst* kontekst) {
    std::cout << "Brak podanego nazwiska do wypisania" << std::endl;
}
