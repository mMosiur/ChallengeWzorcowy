public class Aplikacja : Sterowanie
{

    public Aplikacja(IUrządzenie urządzenie) : base(urządzenie)
    {
    }

    public override void Uruchom()
    {
        System.Console.WriteLine("Uruchamiam z aplikacji:");
        base.Uruchom();
    }

    public override void Wyłącz()
    {
        System.Console.WriteLine("Wyłączam z aplikacji:");
        base.Wyłącz();
    }

    public void PrzełączUrządzenie(IUrządzenie urządzenie)
    {
        this.urządzenie = urządzenie;
    }

}