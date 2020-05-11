#include "Wyswietlacz.h"
#include "PolecenieKapitalizuj.h"
#include "PolecenieOdwroc.h"
#include "PolecenieZaktualizuj.h"
#include <queue>
#include <stack>

std::queue<IPolecenie*> polecenia;
std::stack<IPolecenie*> wykonane;

void wykonaj_nastêpne_polecenie() {
    IPolecenie* polecenie = polecenia.front();
    polecenia.pop();
    polecenie->wykonaj();
    wykonane.push(polecenie);
}

void wycofaj_ostatnie_polecenie() {
    IPolecenie* polecenie = wykonane.top();
    polecenie->wycofaj();
    wykonane.pop();
}


int main() {
    Wyswietlacz wyswietlacz;
    wyswietlacz.teksty.push_back(Tekst("pierwszy wiersz"));
    wyswietlacz.teksty.push_back(Tekst("drugi WIERSZ"));
    wyswietlacz.teksty.push_back(Tekst("TRZECI wiersz"));

    polecenia.push(new PolecenieZaktualizuj(&wyswietlacz));           // Polecenie 1
    polecenia.push(new PolecenieKapitalizuj(&wyswietlacz.teksty[0])); // Polecenie 2
    polecenia.push(new PolecenieZaktualizuj(&wyswietlacz));           // Polecenie 3
    polecenia.push(new PolecenieOdwroc(&wyswietlacz.teksty[1]));      // Polecenie 4
    polecenia.push(new PolecenieZaktualizuj(&wyswietlacz));           // Polecenie 5

    wykonaj_nastêpne_polecenie(); // Zostanie wykonane polecenie 1
    wykonaj_nastêpne_polecenie(); // Zostanie wykonane polecenie 2
    wykonaj_nastêpne_polecenie(); // Zostanie wykonane polecenie 3
    wykonaj_nastêpne_polecenie(); // Zostanie wykonane polecenie 4
    wycofaj_ostatnie_polecenie(); // Zostanie wycofane polecenie 4, czyli odwrócenie liter
    wykonaj_nastêpne_polecenie(); // Zostanie wykonane polecenie 5


    return 0;
}