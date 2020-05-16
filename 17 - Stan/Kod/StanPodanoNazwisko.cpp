#include "StanPodanoNazwisko.h"
#include "Kontekst.h"

void StanPodanoNazwisko::podaj_imi�(Kontekst* kontekst, std::string imi�) {
    kontekst->imi� = imi�;
    kontekst->stan = new StanPodanoDane;
    delete this;
}

void StanPodanoNazwisko::podaj_nazwisko(Kontekst* kontekst, std::string nazwisko) {
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

void StanPodanoNazwisko::wypisz_imi�(Kontekst* kontekst) {
    std::cout << "Brak podanego imienia do wypisania" << std::endl;
}

void StanPodanoNazwisko::wypisz_nazwisko(Kontekst* kontekst) {
    std::cout << kontekst->nazwisko << std::endl;
}

void StanPodanoNazwisko::wypisz_dane(Kontekst* kontekst) {
    std::cout << "Brak podanego imienia do wypisania" << std::endl;
}
