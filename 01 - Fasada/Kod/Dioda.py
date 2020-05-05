class DiodaRGB:
    def __init__(self, domyślny_czerwony, domyślny_zielony, domyślny_niebieski):
        print("Tworzę diodę")
        self.czerwony = domyślny_czerwony
        self.zielony = domyślny_zielony
        self.niebieski = domyślny_niebieski

    def włącz(self):
        print("Dioda włączona")

    def wyłącz(self):
        print("Dioda wyłączona")

    def ustaw_kolor(self, czerwony, zielony, niebieski):
        self.czerwony = czerwony
        self.zielony = zielony
        self.niebieski = niebieski
