from math import pi

class Koło:
    def __init__(self, średnica):
        print("Tworzę koło")
        self.średnica = średnica
    def obwód(self) -> float:
        obw = 2 * pi * self.średnica
        return obw

