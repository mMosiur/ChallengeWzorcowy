from cyfrypi import ICyfryPi

class PiProxy(ICyfryPi):
    """ Proxy wirtualne dla klasy Pi """

    def __init__(self):
        """ Konstruktor inicjalizujący proxy pi"""
        self.__pi = None
        
    def cyfra(self, pozycja: int) -> str:
        """ Funkcja zwracająca cyfrę liczby pi na danej pozycji """
        if self.__pi == None:
            from pi import Pi
            self.__pi = Pi()
        return self.__pi.cyfra(pozycja)

    def cyfry(self, od: int, do: int) -> str:
        """ Funkcja zwracająca cyfry o pozycjach [od, do) """
        if self.__pi == None:
            from pi import Pi
            self.__pi = Pi()
        return self.__pi.cyfry(od, do)
