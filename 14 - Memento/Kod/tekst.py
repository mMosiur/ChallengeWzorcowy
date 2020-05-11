from mementoTekstu import MementoTekstu as Memento

class Tekst:
    def __init__(self):
        self.__stan = ""

    def dopisz(self, tekst: str):
        self.__stan += tekst

    def stworz_memento(self) -> Memento:
        memento = Memento()
        memento.ustaw_stan(self.__stan)
        return memento

    def przywroc_memento(self, memento: Memento):
        self.__stan = memento.stan()

    def wypisz(self, end='\n'):
        if self.__stan == "": return
        if self.__stan[-1] == '\n': end = ''
        print(self.__stan, end=end)

