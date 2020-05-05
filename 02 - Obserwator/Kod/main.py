from Termometr import Termometr
from CzujnikSwiatla import CzujnikŚwiatła
from OswietlenieDomowe import OświetlenieDomowe
from OswietlenieOgrodowe import OświetlenieOgrodowe
from Ogrzewanie import Ogrzewanie

termometr = Termometr() # Obiekt obserwowany
ogrzewanie = Ogrzewanie(50) # Obserwator
termometr.zarejestruj(ogrzewanie) # Rejestracja obserwatora

czujnik = CzujnikŚwiatła() # Obiekt obserwowany
dom = OświetlenieDomowe() # Obserwator
czujnik.zarejestruj(dom) # Rejestracja obserwatora
ogród = OświetlenieOgrodowe(50, 1.0)  # Obserwator
czujnik.zarejestruj(ogród) # Rejestracja obserwatora

termometr.zmierz_temperaturę()
czujnik.zmierz_poziom_światła()
