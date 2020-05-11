from edytorTekstu import EdytorTekstu as Edytor

opcje = {
    "1" : "Pisanie tekstu",
    "2" : "Zapis aktualnego tekstu",
    "3" : "Wczytanie wcześniejszego tekstu",
    "4" : "Wyświetlenie aktualnego tekstu",
    "5" : "Wyjście"
    }

if __name__ == "__main__":
    edytor = Edytor()
    akcja = ""
    while akcja != "5":
        for opcja, opis in opcje.items():
            print("!> {}) {}".format(opcja, opis))
        akcja = input("!> Podaj opcję do wybrania: ")
        if akcja == "1":
            edytor.pisz_dalej()
        elif akcja == "2":
            edytor.zapisz()
        elif akcja == "3":
            edytor.wczytaj()
        elif akcja == "4":
            edytor.wypisz()
        elif akcja == "5":
            pass
        else:
            print("!> Błąd wejścia")
    print("Wyjście z programu")
