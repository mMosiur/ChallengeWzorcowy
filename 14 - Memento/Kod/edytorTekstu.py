from tekst import Tekst
from dozorcaMement import DozorcaMement as Dozorca

class EdytorTekstu:
    def __init__(self):
        self.tekst = Tekst()
        self.mementa = Dozorca()

    def zapisz(self):
        memento = self.tekst.stworz_memento()
        poz = self.mementa.dodaj_memento(memento)
        print("!> Zapisano tekst na pozycji", poz)

    def wczytaj(self):
        self.mementa.wypisz()
        poz = int(input("!> Podaj numer do wczytania: "))
        memento = self.mementa.memento(poz)
        self.tekst.przywroc_memento(memento)
        print("!> Wczytano zapis")

    def wypisz(self, end='\n'):
        self.tekst.wypisz(end=end)

    def pisz_dalej(self):
        print("!> Kontynuuj pisanie, Ctrl-Z w nowej linii aby skończyć")
        self.wypisz(end='')
        dalszy_tekst = []
        while True:
            try:
                linia = input("")
            except EOFError:
                break
            dalszy_tekst.append(linia)
        dalszy_tekst = '\n'.join(dalszy_tekst)
        self.tekst.dopisz(dalszy_tekst)
