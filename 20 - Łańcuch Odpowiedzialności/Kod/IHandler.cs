public interface IHandler
{

    public abstract IHandler Następny();

    public abstract void UstawNastępny(IHandler handler);

    public abstract void Obsłuż(Problem problem);

}