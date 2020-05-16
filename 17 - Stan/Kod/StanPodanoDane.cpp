#include "StanPodanoDane.h"
#include "Kontekst.h"

void StanPodanoDane::podaj_imiê(Kontekst* kontekst, std::string imiê) {
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

void StanPodanoDane::podaj_nazwisko(Kontekst* kontekst, std::string nazwisko) {
    std::cout << "Nazwisko zosta³o ju¿ podane. Czy chcesz je zmieniæ na '" << nazwisko << "'? (tak/nie) - ";
    std::string odpowiedŸ = "";
    while(odpowiedŸ == "") {
        std::cin >> odpowiedŸ;
        if(odpowiedŸ == "tak") {
            kontekst->nazwisko = nazwisko;
        } else if(odpowiedŸ != "nie") {
            odpowiedŸ = "";
            std::cout << "B³êdne wejœcie. Czy chcesz zmieniæ nazwisko na '" << nazwisko << "'? (tak/nie) - ";
        }
    }
}

void StanPodanoDane::wypisz_imiê(Kontekst* kontekst) {
    std::cout << kontekst->imiê << std::endl;
}

void StanPodanoDane::wypisz_nazwisko(Kontekst* kontekst) {
    std::cout << kontekst->nazwisko << std::endl;
}

void StanPodanoDane::wypisz_dane(Kontekst* kontekst) {
    std::cout << kontekst->imiê << " " << kontekst->nazwisko << std::endl;
}
