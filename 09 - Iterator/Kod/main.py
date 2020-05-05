from lista import Lista

if __name__ == "__main__":
    lista = Lista()
    lista.dodaj(1)
    lista.dodaj(2)
    lista.dodaj(3)
    it = lista.iterator()
    print("Początek listy")
    while(it.hasNext()):
        print(it.next())
    print("Koniec listy")
