#include "TablicaWielowymiarowa.h"
#include <iostream>

void TablicaWielowymiarowa::dodaj_tablice(TablicaWypisywalna* tab) {
    tablice.push_back(tab);
}

void TablicaWielowymiarowa::wypisz(bool enter) {
	std::cout << "[";
	for(auto& tab : tablice) {
		tab->wypisz(false);
		std::cout << ", ";
	}
	if(tablice.size() > 0) std::cout << "\b\b";
	std::cout << "]";
	if(enter) std::cout << std::endl;
}
