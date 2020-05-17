public class PanelSterowania : Sterowanie
{

    public PanelSterowania(IUrz¹dzenie urz¹dzenie) : base(urz¹dzenie)
    {
    }

    public void Konfiguruj()
    {
        System.Console.WriteLine("Konfigurujê urz¹dzenie");
    }

}