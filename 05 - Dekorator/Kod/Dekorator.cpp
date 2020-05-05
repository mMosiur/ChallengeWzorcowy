#include <iostream>

class Osoba {
public:
    virtual void powiedz_cos() = 0;
};

class Szymon : public Osoba {
    std::string zdania[5] = {
        "Podskocz",
        "Mrugnij",
        "Pisz kod",
        "Oddychaj",
        "Zostan w domu"
    };
public:
    void powiedz_cos() {
        std::cout << zdania[rand()%5] << std::endl;
    }
};

class SzymonMowi : public Osoba {
    Szymon szymon;
public:
    void powiedz_cos() {
        std::cout << "Szymon mowi: ";
        szymon.powiedz_cos();
    }
    SzymonMowi(Szymon szymon) : szymon(szymon) {}
};

int main() {
    Szymon szymon;
    SzymonMowi szymonmowi(szymon);
    Osoba* osoby[2] = {&szymon, &szymonmowi};
    for(int i = 0; i < 10; i++) {
        Osoba& osoba = *(osoby[rand()%2]);
        osoba.powiedz_cos();
    }
    return 0;
}