#include "StanPodanoNazwisko.h"
#include "Kontekst.h"

void StanPodanoNazwisko::podaj_imiÍ(Kontekst* kontekst, std::string imiÍ) {
    kontekst->imiÍ = imiÍ;
    kontekst->stan = new StanPodanoDane;
    delete this;
}

void StanPodanoNazwisko::podaj_nazwisko(Kontekst* kontekst, std::string nazwisko) {
    std::cout << "Nazwisko zosta≥o juø podane. Czy chcesz je zmieniÊ na '" << nazwisko << "'? (tak/nie) - ";
    std::string odpowiedü = "";
    while(odpowiedü == "") {
        std::cin >> odpowiedü;
        if(odpowiedü == "tak") {
            kontekst->nazwisko = nazwisko;
        } else if(odpowiedü != "nie") {
            odpowiedü = "";
            std::cout << "B≥Ídne wejúcie. Czy chcesz zmieniÊ nazwisko na '" << nazwisko << "'? (tak/nie) - ";
        }
    }
}

void StanPodanoNazwisko::wypisz_imiÍ(Kontekst* kontekst) {
    std::cout << "Brak podanego imienia do wypisania" << std::endl;
}

void StanPodanoNazwisko::wypisz_nazwisko(Kontekst* kontekst) {
    std::cout << kontekst->nazwisko << std::endl;
}

void StanPodanoNazwisko::wypisz_dane(Kontekst* kontekst) {
    std::cout << "Brak podanego imienia do wypisania" << std::endl;
}
