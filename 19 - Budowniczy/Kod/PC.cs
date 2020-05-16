public struct PC
{

    public string płyta_główna;

    public string cpu;

    public string ram;

    public string gpu;

    public void Wyświetl()
    {
        System.Console.WriteLine("PC:");
        System.Console.WriteLine("Płyta główna - " + płyta_główna);
        System.Console.WriteLine("CPU - " + cpu);
        System.Console.WriteLine("RAM - " + ram);
        if (gpu != null)
        {
            System.Console.WriteLine("GPU - " + gpu);
        }
        else
        {
            System.Console.WriteLine("GPU - brak");
        }
    }

}