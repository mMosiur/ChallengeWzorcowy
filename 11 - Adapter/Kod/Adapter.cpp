#include <iostream>
#include <vector>

class IPies {
public:
    virtual void szczekaj() = 0;
};

class Pies : public IPies {
public:
    void szczekaj() {
        std::cout << "WOOF!" << std::endl;
    }
};

class Kot {
public:
    void miaucz() {
        std::cout << "Meow" << std::endl;
    }
};

class AdapterKota : public IPies {
    Kot* kot;
public:
    AdapterKota(Kot* kot): kot(kot) {}
    void szczekaj() {
        std::cout << "Szczekam: ";
        kot->miaucz();
    }
};


int main() {
    std::vector<IPies*> psy;
    psy.push_back(new Pies());
    psy.push_back(new Pies());
    psy.push_back(new AdapterKota(new Kot()));
    psy.push_back(new Pies());
    psy.push_back(new Pies());
    psy.push_back(new Pies());
    
    for(auto& pies : psy) {
        pies->szczekaj();
    }
    
    return 0;
}