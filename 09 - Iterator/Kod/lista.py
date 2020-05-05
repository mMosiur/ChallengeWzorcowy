from kolekcja import Kolekcja
from iterator import Iterator

class ElementListy:
    """ Klasa elementu listy zawierająca jego zawartość i następny element w liście """

    def __init__(self, wartosc):
        """ Konstruktor elementu przyjmujący jego zawartość, zapisujący ją i inicjalizujący element następny na None """
        self.następny = None
        self.wartość = wartosc

class IteratorListy(Iterator):
    """ Klasa iteratora dla listy """

    def __init__(self, element: ElementListy):
        """ Konstruktor iteratora dla listy przyjmujący początkowy element z listy """
        self.element = element

    def next(self):
        """
        Funkcja iteratora listy zwracająca następny element w liście.
        Jeżeli nie ma następnego elementu, rzuca wyjątek IndexError
        """
        if not self.hasNext(): raise IndexError("Brak następnego elementu!")
        el = self.element
        self.element = self.element.następny
        return el.wartość

    def hasNext(self) -> bool:
        """ Funkcja zwracająca, czy w liście iteratora jest więcej elementów """
        return self.element != None
        

class Lista(Kolekcja):
    """ Klasa listy implementującej interfejs kolekcji """

    def __init__(self):
        """ Konstruktor inicjalizujący zmienne pierwszy i ostatni element """
        self.pierwszy = None
        self.ostatni = None
    
    def iterator(self):
        """ Funkcja zwracająca iterator dla tej listy zaczynający od pierwszego elementu """
        return IteratorListy(self.pierwszy)

    def dodaj(self, wartość):
        """ Funkcja dodająca do listy element o wartości z argumentu """
        element = ElementListy(wartość)
        if(self.pierwszy == None): self.pierwszy = element
        else: self.ostatni.następny = element
        self.ostatni = element
    