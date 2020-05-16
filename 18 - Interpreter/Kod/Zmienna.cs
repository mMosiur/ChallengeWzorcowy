public class Zmienna : IWyrażenieTerminalne {


    private readonly string symbol;


    public Zmienna(string symbol) {
        this.symbol = symbol;
    }

    public int Interpretuj(Kontekst kontekst) {
        return kontekst.zmienne[this.symbol];
    }

}