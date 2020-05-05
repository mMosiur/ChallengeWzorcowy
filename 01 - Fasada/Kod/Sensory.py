from Sensor import SensorOdległości
from Dioda import DiodaRGB
from time import sleep


class SensoryOdległości:
    def __init__(self, maksymala_odległość):
        self._przedni = SensorOdległości(maksymala_odległość)
        self._tylny = SensorOdległości(maksymala_odległość)

    def odległość_z_przodu(self):
        odległość = self._przedni.odległość()
        return odległość

    def odległość_z_tyłu(self):
        odległość = self._tylny.odległość()
        return odległość

    def _mrugnij_diodą(self, dioda: DiodaRGB):
        aktualny_kolor = (dioda.czerwony, dioda.zielony, dioda.niebieski)
        dioda.ustaw_kolor(255, 0, 0)
        sleep(1)
        dioda.ustaw_kolor(aktualny_kolor)
