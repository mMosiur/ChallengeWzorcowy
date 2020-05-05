class Silnik:
    def __init__(self, moc_maksymalna):
        print("Tworzę silnik")
        self.moc_maksymalna = moc_maksymalna

    def do_przodu(self, moc: float):
        if moc > 1:
            moc = 1
        if moc < 0:
            moc = 0
        print("Kręcę koło do przodu z mocą", self.moc_maksymalna*moc)

    def do_tyłu(self, moc: float):
        print("Kręcę koło do tyłu z mocą", self.moc_maksymalna*moc)
