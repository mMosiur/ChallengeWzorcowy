from cyfrypi import ICyfryPi

class Pi(ICyfryPi):
    """ Klasa liczby pi """

    def __init__(self):
        """ Konstruktor inicjalizujący klasę pi"""
        import requests
        print("Zaczynam pobieranie liczby pi...")
        r = requests.get("https://www.angio.net/pi/digits/pi1000000.txt")
        if r.status_code != 200:
            raise ConnectionError
        self.__pi = r.text.strip().replace(".", "")
        print("Kończę pobieranie liczby pi...")

    def cyfra(self, pozycja: int) -> str:
        """ Funkcja zwracająca cyfrę liczby pi na danej pozycji """
        return self.__pi[pozycja]

    def cyfry(self, od: int, do: int) -> str:
        """ Funkcja zwracająca cyfry o pozycjach [od, do) """
        return self.__pi[od:do+1]
