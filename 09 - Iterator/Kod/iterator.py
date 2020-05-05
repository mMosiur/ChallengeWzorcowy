class Iterator:
    """ Interfejs iteratora """

    def __init__(self):
        """ Konstruktor interfejsu """
        raise NotImplementedError("Klasa jest interfejsem")

    def next(self):
        """ Funkcja zwracająca następny element w kolekcji danego iteratora """
        raise NotImplementedError("Klasa jest interfejsem")

    def hasNext(self) -> bool:
        """ Funkcja zwracająca, czy w kolekcji danego iteratora jest następny element """
        raise NotImplementedError("Klasa jest interfejsem")
