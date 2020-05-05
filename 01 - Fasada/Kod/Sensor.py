class SensorOdległości:
    def __init__(self, maks_odległość: int):
        print("Tworzę sensor")
        self.maks_odległość = maks_odległość

    def odległość(self) -> int:
        print("Mierzę odległość")
        ret = min(100, self.maks_odległość)
        print("Zwracam odległość")
        return ret
