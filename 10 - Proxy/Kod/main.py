from piproxy import PiProxy as Pi

if __name__ == "__main__":
    print("Tworzę obiekt liczby pi")
    pi = Pi()
    print("Obiekt pi stworzony")
    print("Obiekt pi niepotrzebny")
    print("Obiekt pi niepotrzebny")
    print("Obiekt pi jednak potrzebny")
    setna_cyfra = pi.cyfra(100)
    print("Setna cyfra liczby pi:", setna_cyfra)
    milionowa_cyfra = pi.cyfra(1000000)
    print("Milionowa cyfra liczby pi:", milionowa_cyfra)
