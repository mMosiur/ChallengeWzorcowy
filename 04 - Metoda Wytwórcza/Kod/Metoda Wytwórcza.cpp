#include <iostream>
#include <vector>

// Interfejs Produkt
class Technik {
public:
    virtual void przedstaw_sie() = 0;
};

// Klasa implementująca interfejs Produkt
class TechnikElektronik : public Technik {
public:
    void przedstaw_sie() {
        std::cout << "Jestem technik elektronik" << std::endl;
    }
};

// Klasa implementująca interfejs Produkt
class TechnikInformatyk : public Technik {
public:
    void przedstaw_sie() {
        std::cout << "Jestem technik informatyk" << std::endl;
    }
};

// Klasa implementująca interfejs Produkt
class TechnikGastronom : public Technik {
public:
    void przedstaw_sie() {
        std::cout << "Jestem technik gastronom" << std::endl;
    }
};

// Interfejs Kreator
class Technikum {
public:
    virtual Technik* stworz_absolwenta() = 0;
};

// Klasa implementująca interfejs Kreator
class TechnikumElektroniczne : public Technikum {
public:
    Technik* stworz_absolwenta() {
        return new TechnikElektronik;
    }
};

// Klasa implementująca interfejs Kreator
class TechnikumInformatyczne : public Technikum {
public:
    Technik* stworz_absolwenta() {
        return new TechnikInformatyk;
    }
};

// Klasa implementująca interfejs Kreator
class TechnikumGastronomiczne : public Technikum {
public:
    Technik* stworz_absolwenta() {
        return new TechnikGastronom;
    }
};


int main() {
    std::vector<Technikum*> technika; // Wektor poliformicznych kreatorów
    technika.push_back(new TechnikumElektroniczne); // Dodajemu klasę kreatora
    technika.push_back(new TechnikumInformatyczne); // Dodajemu klasę kreatora
    technika.push_back(new TechnikumGastronomiczne);// Dodajemu klasę kreatora

    std::vector<Technik*> absolwenci; // Wektor poliformiczych produktów

    for(auto& technikum : technika) {
        absolwenci.push_back(technikum->stworz_absolwenta()); // Kreator dodaje swój produkt do wektora
    }

    for(auto& absolwent : absolwenci) { // Produkty
        absolwent->przedstaw_sie(); // Akcja produktu
    }

    for(auto& technikum: technika) delete technikum; // Usuwanie dynamicznie stworzonych kreatorów
    for(auto& absolwent: absolwenci) delete absolwent; // Usuwanie dynamicznie stworzonych absolwentów

    return 0;
}