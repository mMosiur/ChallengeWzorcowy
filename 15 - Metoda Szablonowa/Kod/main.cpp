#include <iostream>
#include "PrzeszukiwanieDrzewaWg³¹b.h"
#include "PrzeszukiwanieDrzewaWszerz.h"

int main() {
    Wêze³Drzewa w0(0);
    Wêze³Drzewa w1(1);
    w0.lewy_syn = &w1;
    Wêze³Drzewa w2(2);
    Wêze³Drzewa w3(3);
    w1.lewy_syn = &w2;
    w2.prawy_brat = &w3;
    Wêze³Drzewa w4(4);
    Wêze³Drzewa w5(5);
    Wêze³Drzewa w6(6);
    Wêze³Drzewa w7(7);
    w2.lewy_syn = &w4;
    w4.prawy_brat = &w5;
    w5.prawy_brat = &w6;
    w3.lewy_syn = &w7;
    Wêze³Drzewa w8(8);
    Wêze³Drzewa w9(9);
    w5.lewy_syn = &w8;
    w8.prawy_brat = &w9;

    PrzeszukiwanieDrzewa* przeszukiwanie;
    przeszukiwanie = new PrzeszukiwanieDrzewaWg³¹b;
    if(przeszukiwanie->szukaj(&w0, 10)) {
        std::cout << "Znaleziono 10" << std::endl;
    } else {
        std::cout << "Nie znaleziono 10" << std::endl;
    }
    delete przeszukiwanie;
    przeszukiwanie = new PrzeszukiwanieDrzewaWszerz;
    if(przeszukiwanie->szukaj(&w0, 7)) {
        std::cout << "Znaleziono 7" << std::endl;
    } else {
        std::cout << "Nie znaleziono 7" << std::endl;
    }

    return 0;
}