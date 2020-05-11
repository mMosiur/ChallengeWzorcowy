#include "MaszynaDoWeryfikowania.h"
#include <array>

int main() {
    std::array<Osoba, 4> osoby = {
        Osoba(20, P³eæ::M, "Jarek", "Pietrzak"),
        Osoba(25, P³eæ::K, "Asia", "Kuc"),
        Osoba(15, P³eæ::M, "Krzyœ", "Samowolny"),
        Osoba(17, P³eæ::K, "Monika", "Sawa")
    };

    MaszynaDoWeryfikowania maszyna_do_weryfikowania;

    std::cout << "Wstêp do sklepu z alkoholem" << std::endl;
    maszyna_do_weryfikowania.ustaw_weryfikator(new WeryfikatorWieku);
    std::cout << "Osoby w sklepie:" << std::endl;
    for(auto& osoba : osoby) {
        if(maszyna_do_weryfikowania.weryfikuj(&osoba)) {
            osoba.przedstaw_siê();
        }
    }

    std::cout << "Wstêp do damskiej toalety" << std::endl;
    maszyna_do_weryfikowania.ustaw_weryfikator(new WeryfikatorP³ci);
    std::cout << "Osoby w toalecie:" << std::endl;
    for(auto& osoba : osoby) {
        if(maszyna_do_weryfikowania.weryfikuj(&osoba)) {
            osoba.przedstaw_siê();
        }
    }

    return 0;
}