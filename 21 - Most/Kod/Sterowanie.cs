public class Sterowanie
{

    protected IUrządzenie urządzenie;

    public Sterowanie(IUrządzenie urządzenie)
    {
        this.urządzenie = urządzenie;
    }

    public virtual void Uruchom()
    {
        urządzenie.Włącz();
    }

    public virtual void Wyłącz()
    {
        urządzenie.Wyłącz();
    }

}