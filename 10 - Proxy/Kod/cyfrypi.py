class ICyfryPi:
    """ Interfejs cyfr liczby Pi """
    
    def __init__(self):
        """ Konstruktor inicjalizujący interfejs pi"""
        raise NotImplementedError("Klasa jest interfejsem")

    def cyfra(self, pozycja: int) -> str:
        """ Funkcja zwracająca cyfrę liczby pi na danej pozycji """
        raise NotImplementedError("Klasa jest interfejsem")

    def cyfry(self, od: int, do: int) -> str:
        """ Funkcja zwracająca cyfry o pozycjach [od, do) """
        raise NotImplementedError("Klasa jest interfejsem")
