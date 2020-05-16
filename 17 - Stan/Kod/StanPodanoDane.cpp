#include "StanPodanoDane.h"
#include "Kontekst.h"

void StanPodanoDane::podaj_imi�(Kontekst* kontekst, std::string imi�) {
    std::cout << "Imi� zosta�o ju� podane. Czy chcesz je zmieni� na '" << imi� << "'? (tak/nie) - ";
    std::string odpowied� = "";
    while(odpowied� == "") {
        std::cin >> odpowied�;
        if(odpowied� == "tak") {
            kontekst->imi� = imi�;
        } else if(odpowied� != "nie") {
            odpowied� = "";
            std::cout << "B��dne wej�cie. Czy chcesz zmieni� imi� na '" << imi� << "'? (tak/nie) - ";
        }
    }
}

void StanPodanoDane::podaj_nazwisko(Kontekst* kontekst, std::string nazwisko) {
    std::cout << "Nazwisko zosta�o ju� podane. Czy chcesz je zmieni� na '" << nazwisko << "'? (tak/nie) - ";
    std::string odpowied� = "";
    while(odpowied� == "") {
        std::cin >> odpowied�;
        if(odpowied� == "tak") {
            kontekst->nazwisko = nazwisko;
        } else if(odpowied� != "nie") {
            odpowied� = "";
            std::cout << "B��dne wej�cie. Czy chcesz zmieni� nazwisko na '" << nazwisko << "'? (tak/nie) - ";
        }
    }
}

void StanPodanoDane::wypisz_imi�(Kontekst* kontekst) {
    std::cout << kontekst->imi� << std::endl;
}

void StanPodanoDane::wypisz_nazwisko(Kontekst* kontekst) {
    std::cout << kontekst->nazwisko << std::endl;
}

void StanPodanoDane::wypisz_dane(Kontekst* kontekst) {
    std::cout << kontekst->imi� << " " << kontekst->nazwisko << std::endl;
}
