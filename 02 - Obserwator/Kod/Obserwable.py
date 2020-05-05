class Obserwable:
    def __init__(self):
        raise NotImplementedError("Klasa jest interfejsem")

    def zarejestruj(self, obserwator):
        raise NotImplementedError("Klasa jest interfejsem")

    def usuń(self, obserwator):
        raise NotImplementedError("Klasa jest interfejsem")

    def powiadom(self):
        raise NotImplementedError("Klasa jest interfejsem")

