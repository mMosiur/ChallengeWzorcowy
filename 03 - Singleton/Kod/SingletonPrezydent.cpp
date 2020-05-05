#include <iostream>

class Prezydent {
    static Prezydent* aktualny_prezydent;
    Prezydent(std::string imie, std::string nazwisko) : imie(imie), nazwisko(nazwisko) {}
    ~Prezydent() {}
public:
    std::string imie;
    std::string nazwisko;

    static void wybierz_prezydenta(std::string imię, std::string nazwisko) {
        if(aktualny_prezydent == nullptr){
            aktualny_prezydent = new Prezydent(imię, nazwisko);
            std::cout << "Wybrano prezydenta " << imię << " " << nazwisko << "." << std::endl;
        } else {
            std::cout << "Prezydent jest juz wybrany." << std::endl;
        }
    }

    static void usun_prezydenta() {
        if(aktualny_prezydent == nullptr){
            std::cout << "Prezydent nie zostal jeszcze wybrany." << std::endl;
        } else {
            delete aktualny_prezydent;
            aktualny_prezydent = nullptr;
            std::cout << "Usunieto prezydenta." << std::endl;
        }
    }

    static Prezydent& prezydent() {
        if(aktualny_prezydent == nullptr){
            throw std::string("Prezydent nie zostal jeszcze wybrany.");
        } else {
            return *aktualny_prezydent;
        }
    }

};
Prezydent* Prezydent::aktualny_prezydent = nullptr;

void wyswietl(){
    std::cout << "> ";
    try{
        std::cout << Prezydent::prezydent().imie << " ";
        std::cout << Prezydent::prezydent().nazwisko << std::endl;
    } catch(std::string e) {
        std::cout << "Zlapano wyjatek: " << e << std::endl;
    }
}

int main(){
    wyswietl();

    Prezydent::wybierz_prezydenta("Andrzej", "Duda");

    wyswietl();

    Prezydent::wybierz_prezydenta("Ktos", "Inny");

    wyswietl();

    Prezydent::usun_prezydenta();

    wyswietl();

    Prezydent::wybierz_prezydenta("Demokratycznie", "Wybrany");

    wyswietl();

    return 0;
}