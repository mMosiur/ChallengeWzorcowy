public class Pilot : Sterowanie
{

    public Pilot(IUrządzenie urządzenie) : base(urządzenie)
    {
    }

    public void Podgłośnij()
    {
        System.Console.WriteLine("Podgłaśniam urządzenie");
    }

    public void Przycisz()
    {
        System.Console.WriteLine("Przyciszam urządzenie");
    }

}