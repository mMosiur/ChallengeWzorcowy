public interface IWyrażenieTerminalne : IWyrażenie
{

    /// <summary>
    /// @param kontekst 
    /// @return
    /// </summary>
    public new abstract int Interpretuj(Kontekst kontekst);

}