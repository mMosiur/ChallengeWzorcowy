#include "Wyswietlacz.h"


void Wyswietlacz::wyswietl() {
	std::cout << "-- Teksty -------------\n";
	for(auto& tekst : teksty) tekst.wypisz();
	std::cout << "----------------------" << std::endl;
}
