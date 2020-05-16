public class Stała : IWyrażenieTerminalne {

    private readonly int wartość;

    public Stała(int wartość) {
        this.wartość = wartość;
    }

    public int Interpretuj(Kontekst kontekst) {
        return this.wartość;
    }

}