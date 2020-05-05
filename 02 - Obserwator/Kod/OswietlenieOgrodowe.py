from CzujnikSwiatla import CzujnikŚwiatła
from Urzadzenie import Urządzenie
from Obserwator import Obserwator

class OświetlenieOgrodowe(Obserwator, Urządzenie):
    def __init__(self, jasność: int, poziom_energii: float):
        self.jasność = jasność
        self.poziom_energii = poziom_energii

    def włącz(self):
        if self.poziom_energii == 0:
            return
        print("Zaczynam świecić z jasnością {}, pozostała energia: {}.".format(
            self.jasność, self.poziom_energii))
        self.poziom_energii = max(0, self.poziom_energii-0.1)

    def wyłącz(self):
        print("Przestaję świecić")

    def aktualizacja(self, podmiot: CzujnikŚwiatła):
        if podmiot.poziom_światła < 50:
            self.włącz()
        else:
            self.wyłącz()
