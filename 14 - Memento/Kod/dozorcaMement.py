from mementoTekstu import MementoTekstu as Memento

class DozorcaMement:
    def __init__(self):
        self.mementa = []

    def memento(self, numer: int) -> Memento:
        if numer not in range(len(self.mementa)):
            raise IndexError("Nie ma momento o podanym numerze")
        return self.mementa[numer]

    def dodaj_memento(self, memento: Memento) -> int:
        self.mementa.append(memento)
        return len(self.mementa) - 1

    def wypisz(self):
        for poz, memento in enumerate(self.mementa):
            podgląd = memento.stan()[:5]+"..."+memento.stan()[-5:]
            print("!> Na pozycji {} znajduje się memento '{}'".format(poz, podgląd))
