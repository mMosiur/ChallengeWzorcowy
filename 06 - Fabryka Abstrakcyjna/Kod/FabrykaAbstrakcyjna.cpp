#include "FabrykaSztuccowMetalowych.h"
#include "FabrykaSztuccowPlastikowych.h"
#include "Noz.h"
#include "Widelec.h"
#include <vector>

int main() {
    FabrykaSztuccowMetalowych fabryka1("Stal");
    FabrykaSztuccowPlastikowych fabryka2("Polistyren");
    std::vector<Noz*> noze;
    std::vector<Widelec*> widelce;
    for (int i = 0; i < 5; i++) {
        noze.push_back(fabryka1.produkujNoz());
        noze.push_back(fabryka2.produkujNoz());
        widelce.push_back(fabryka1.produkujWidelec());
        widelce.push_back(fabryka2.produkujWidelec());
    }
    for (auto& widelec : widelce) {
        widelec->nabij();
    }
    for (auto& noz : noze) {
        noz->przekroj();
    }
    return 0;
}