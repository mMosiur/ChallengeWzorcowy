from iterator import Iterator

class Kolekcja:
    """ Interfejs kolekcji """

    def __init__(self):
        """ Konstruktor kolekcji """
        raise NotImplementedError("Klasa jest interfejsem")

    def iterator(self) -> Iterator:
        """ funkcja zwracająca iterator dla kolekcji """
        raise NotImplementedError("Klasa jest interfejsem")
