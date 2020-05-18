public class Koło : IKształt
{
 
    public float Promień { get; set; }

    public Koło(float promień)
    {
        this.Promień = promień;
    }

    public void Przyjmij(IWizytator wizytator)
    {
        wizytator.Odwiedź(this);
    }

}