#include "MaszynaDoWeryfikowania.h"
#include <array>

int main() {
    std::array<Osoba, 4> osoby = {
        Osoba(20, P�e�::M, "Jarek", "Pietrzak"),
        Osoba(25, P�e�::K, "Asia", "Kuc"),
        Osoba(15, P�e�::M, "Krzy�", "Samowolny"),
        Osoba(17, P�e�::K, "Monika", "Sawa")
    };

    MaszynaDoWeryfikowania maszyna_do_weryfikowania;

    std::cout << "Wst�p do sklepu z alkoholem" << std::endl;
    maszyna_do_weryfikowania.ustaw_weryfikator(new WeryfikatorWieku);
    std::cout << "Osoby w sklepie:" << std::endl;
    for(auto& osoba : osoby) {
        if(maszyna_do_weryfikowania.weryfikuj(&osoba)) {
            osoba.przedstaw_si�();
        }
    }

    std::cout << "Wst�p do damskiej toalety" << std::endl;
    maszyna_do_weryfikowania.ustaw_weryfikator(new WeryfikatorP�ci);
    std::cout << "Osoby w toalecie:" << std::endl;
    for(auto& osoba : osoby) {
        if(maszyna_do_weryfikowania.weryfikuj(&osoba)) {
            osoba.przedstaw_si�();
        }
    }

    return 0;
}