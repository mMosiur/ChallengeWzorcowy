public class PustyHandler : IHandler
{

    protected IHandler następny;

    public IHandler Następny()
    {
        return następny;
    }

    public void UstawNastępny(IHandler handler)
    {
        if (następny != null)
            handler.UstawNastępny(następny);
        następny = handler;
    }

    public virtual void Obsłuż(Problem problem)
    {
        if (Następny() == null) return;
        Następny().Obsłuż(problem);
    }

}