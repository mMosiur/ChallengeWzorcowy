from Obserwable import Obserwable
from Obserwator import Obserwator

class Termometr(Obserwable):
    def __init__(self):
        self.obserwatorzy = list()
        self.temperatura = None

    def zarejestruj(self, obserwator: Obserwator):
        self.obserwatorzy.append(obserwator)

    def usuń(self, obserwator: Obserwator):
        self.obserwatorzy.remove(obserwator)

    def powiadom(self):
        print("Powiadamiam obserwatorów termometru")
        for obserwator in self.obserwatorzy:
            obserwator.aktualizacja(self)

    def zmierz_temperaturę(self):
        from time import localtime
        hour = localtime().tm_hour
        temp = (5,5,4,4,5,7,9,10,12,13,14,15,17,17,16,14,12,12,11,10,10,9,9,7)[hour]
        if temp != self.temperatura:
            self.temperatura = temp
            self.powiadom()