from Naped import Napęd
from Sensory import SensoryOdległości
from Dioda import DiodaRGB


class FasadaRobota:
    def __init__(self):
        self.napęd = Napęd(100, 5, 80)
        self.sensory = SensoryOdległości(200)
        self.dioda = DiodaRGB(0, 0, 0)
        self.włączony = False

    def jedź_prosto(self, odległość):
        if not self.włączony:
            print("Robot wyłączony")
            return
        if odległość > 0:
            odległość_z_przodu = self.sensory.odległość_z_przodu()
            if odległość_z_przodu < 10:
                self.sensory._mrugnij_diodą()
            if odległość_z_przodu < 1:
                return
            print("Jadę do przodu")
            self.napęd.do_przodu(odległość)
        else:
            odległość_z_tyłu = self.sensory.odległość_z_tyłu()
            if odległość_z_tyłu < 10:
                self.sensory._mrugnij_diodą()
            if odległość_z_tyłu < 1:
                return
            print("Jadę do tyłu")
            self.napęd.do_tyłu(odległość)

    def skręć(self, kąt: int):
        if not self.włączony:
            print("Robot wyłączony")
            return
        if kąt > 0:
            print("Skręcam w prawo")
            self.napęd.w_prawo(kąt)
        else:
            print("Skręcam w lewo")
            kąt = abs(kąt)
            self.napęd.w_lewo(kąt)

    def włącz(self):
        self.włączony = True
        self.dioda.włącz()
        print("Robot włączony")

    def wyłącz(self):
        self.dioda.wyłącz()
        self.włączony = False
        print("Robot wyłączony")
