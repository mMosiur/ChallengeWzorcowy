using System.IO;

public class Pyłek
{

    private readonly string liczba;

    public Pyłek(string nazwa)
    {
        string plik = "../../../Liczby/" + nazwa + ".txt";
        liczba = File.ReadAllText(plik);
    }

    public int CyfraNaPozycji(int pozycja)
    {
        if (pozycja > 0) pozycja++;
        var cyfra = char.GetNumericValue(liczba[pozycja]);
        return (int)cyfra;
    }

}