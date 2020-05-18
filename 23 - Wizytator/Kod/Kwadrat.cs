public class Kwadrat : IKształt
{
    
    public float Bok { get; set; }
    
    public Kwadrat(float bok)
    {
        this.Bok = bok;
    }

    public void Przyjmij(IWizytator wizytator)
    {
        wizytator.Odwiedź(this);
    }

}