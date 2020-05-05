#include "Komorka.h"
#include <vector>
#include <iostream>

int main() {
    Komorka* komorka = new Komorka("GCCAGTTCTCTCAAGCTAACTAC");

    std::vector<Prototyp*> obiekty;
    obiekty.push_back(komorka);
    for(int i = 0; i < 10; i++) {
        obiekty.push_back(komorka->clone());
    }
    for(int i = 1; i < obiekty.size(); i++) {
        Komorka* k1 = (Komorka*)obiekty[i - 1];
        Komorka* k2 = (Komorka*)obiekty[i];
        std::cout << "Komorka " << i - 1 << " i " << i;
        if(k1->zgodne_dna(k2)) {
            std::cout << " maja takie same DNA" << std::endl;
        } else {
            std::cout << " sa rozne od siebie" << std::endl;
        }
    }
    
    return 0;
}