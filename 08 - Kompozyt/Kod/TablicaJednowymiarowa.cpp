#include "TablicaJednowymiarowa.h"

std::ostream& operator<<(std::ostream& os, const Element& el) {
    os << el.value;
    return os;
}

void TablicaJednowymiarowa::dodaj_element(Element&& el) {
    elements.push_back(el);
}

void TablicaJednowymiarowa::wypisz(bool enter) {
    std::cout << "[";
    for(auto& el : elements) {
        std::cout << el << ", ";
    }
    if(elements.size() > 0) {
        std::cout << "\b\b";
    }
    std::cout << "]";
    if(enter) std::cout << std::endl;
}
