#include "StanPodanoImi�.h"
#include "Kontekst.h"

void StanPodanoImi�::podaj_imi�(Kontekst* kontekst, std::string imi�) {
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

void StanPodanoImi�::podaj_nazwisko(Kontekst* kontekst, std::string nazwisko) {
    kontekst->nazwisko = nazwisko;
    kontekst->stan = new StanPodanoDane;
    delete this;
}

void StanPodanoImi�::wypisz_imi�(Kontekst* kontekst) {
    std::cout << kontekst->imi� << std::endl;
}

void StanPodanoImi�::wypisz_nazwisko(Kontekst* kontekst) {
    std::cout << "Brak podanego nazwiska do wypisania" << std::endl;
}

void StanPodanoImi�::wypisz_dane(Kontekst* kontekst) {
    std::cout << "Brak podanego nazwiska do wypisania" << std::endl;
}
