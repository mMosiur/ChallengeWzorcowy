public class PanelSterowania : Sterowanie
{

    public PanelSterowania(IUrządzenie urządzenie) : base(urządzenie)
    {
    }

    public void Konfiguruj()
    {
        System.Console.WriteLine("Konfiguruję urządzenie");
    }

}