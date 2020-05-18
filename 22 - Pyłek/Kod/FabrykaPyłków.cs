using System.Collections.Generic;

public class FabrykaPyłków
{

    private readonly Dictionary<string, Pyłek> pyłki = new Dictionary<string, Pyłek>();

    public Pyłek ZwróćPyłek(string nazwa)
    {
        if (!pyłki.ContainsKey(nazwa))
        {
            pyłki[nazwa] = new Pyłek(nazwa);
        }
        return pyłki[nazwa];
    }

}