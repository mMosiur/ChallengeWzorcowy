from Obserwator import Obserwator
from Urzadzenie import Urządzenie
from Termometr import Termometr

class Ogrzewanie(Obserwator, Urządzenie):
    def __init__(self, moc_grzewcza):
        self.moc_grzewcza = moc_grzewcza

    def włącz(self):
        print("Zaczynam grzać z mocą", self.moc_grzewcza)

    def wyłącz(self):
        print("Przestaję grzać")

    def aktualizacja(self, podmiot: Termometr):
        self.włącz() if podmiot.temperatura < 10 else self.wyłącz()
