from Silnik import Silnik
from Kolo import Koło
from time import sleep

class Napęd:
    def __init__(self, moc_maksymalna, średnica_koła, moc_użytkowa):
        print("Tworzę napęd")
        self._lewy_silnik = Silnik(moc_maksymalna)
        self._lewe_koło = Koło(średnica_koła)
        self._prawy_silnik = Silnik(moc_maksymalna)
        self._prawe_koło = Koło(średnica_koła)
        self._moc_użytkowa = moc_użytkowa

    def do_przodu(self, odległość):
        średnica_koła = self._lewe_koło.obwód()
        if średnica_koła != self._prawe_koło.obwód(): raise ValueError("Złe średnice kół")
        czas = (odległość/self._moc_użytkowa)/średnica_koła
        for i in range(int(czas)):
            print("Lewy silnik: ", end='')
            self._lewy_silnik.do_przodu(self._moc_użytkowa)
            print("Prawy silnik: ", end='')
            self._prawy_silnik.do_przodu(self._moc_użytkowa)

    def do_tyłu(self, odległość):
        średnica_koła = self._lewe_koło.obwód()
        if średnica_koła != self._prawe_koło.obwód(): raise ValueError("Złe średnice kół")
        czas = (odległość/self._moc_użytkowa)/średnica_koła
        for i in range(int(czas)):
            print("Lewy silnik: ", end='')
            self._lewy_silnik.do_tyłu(self._moc_użytkowa)
            print("Prawy silnik: ", end='')
            self._prawy_silnik.do_tyłu(self._moc_użytkowa)

    def w_lewo(self, kąt):
        czas = kąt/self.moc_użytkowa
        for i in range(int(czas)):
            print("Lewy silnik: ", end='')
            self._lewy_silnik.do_tyłu(self._moc_użytkowa)
            print("Prawy silnik: ", end='')
            self._prawy_silnik.do_przodu(self._moc_użytkowa)


    def w_prawo(self, kąt):
        czas = kąt/self._moc_użytkowa
        for i in range(int(czas)):
            print("Lewy silnik: ", end='')
            self._lewy_silnik.do_przodu(self._moc_użytkowa)
            print("Prawy silnik: ", end='')
            self._prawy_silnik.do_tyłu(self._moc_użytkowa)

    def mrugnij_diodą(self, dioda):
        aktualny_kolor = (dioda.czerwony, dioda.zielony, dioda.niebieski)
        dioda.ustaw_kolor(255, 0, 0)
        sleep(1)
        dioda.ustaw_kolor(aktualny_kolor)

    def zmień_moc(self, moc: int):
        self._moc_użytkowa = moc

