class MementoTekstu:
    """ Memento """

    def __init__(self):
        self.__stan = ""

    def ustaw_stan(self, stan: str):
        self.__stan = stan

    def stan(self) -> str:
        return self.__stan
