
#-*- coding: utf-8 -*-

from Obserwable import Obserwable
from Obserwator import Obserwator

class CzujnikŚwiatła(Obserwable):
    def __init__(self):
        self.obserwatorzy = list()
        self.poziom_światła = None

    def zarejestruj(self, obserwator: Obserwator):
        self.obserwatorzy.append(obserwator)

    def usuń(self, obserwator: Obserwator):
        self.obserwatorzy.remove(obserwator)

    def powiadom(self):
        print("Powiadamiam obserwatorów czujnika światła")
        for obserwator in self.obserwatorzy:
            obserwator.aktualizacja(self)

    def zmierz_poziom_światła(self):
        from time import localtime
        hour = localtime().tm_hour
        jasn = (5,5,4,4,10,20,50,70,90,120,140,140,140,140,140,135,130,120,100,80,50,20,15,10)[hour]
        if jasn != self.poziom_światła:
            self.poziom_światła = jasn
            self.powiadom()