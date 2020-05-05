from Obserwator import Obserwator
from Urzadzenie import Urządzenie
from CzujnikSwiatla import CzujnikŚwiatła

class OświetlenieDomowe(Obserwator, Urządzenie):
    def __init__(self):
        self.sterowanie_ręczne = None

    def włącz(self):
        print("Włączam oświetlenie domowe")

    def wyłącz(self):
        print("Wyłączam oświetlenie domowe")

    def aktualizacja(self, podmiot: CzujnikŚwiatła):
        self.włącz() if podmiot.poziom_światła < 80 and podmiot.poziom_światła > 30 else self.wyłącz()