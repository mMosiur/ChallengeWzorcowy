public class PrzeszukiwaczLiczby
{

    private readonly Pyłek liczba;

    private int pozycja;

    public PrzeszukiwaczLiczby(Pyłek liczba)
    {
        this.liczba = liczba;
        this.pozycja = 0;
    }

    public int OdczytajCyfrę()
    {
        int cyfra = liczba.CyfraNaPozycji(pozycja);
        pozycja++;
        return cyfra;
    }

    public void UstawPozycję(int pozycja)
    {
        this.pozycja = pozycja;
    }

    public int ZwróćPozycję()
    {
        return this.pozycja;
    }

}