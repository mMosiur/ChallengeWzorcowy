public class PanelSterowania : Sterowanie
{

    public PanelSterowania(IUrz�dzenie urz�dzenie) : base(urz�dzenie)
    {
    }

    public void Konfiguruj()
    {
        System.Console.WriteLine("Konfiguruj� urz�dzenie");
    }

}