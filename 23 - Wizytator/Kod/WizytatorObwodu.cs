using System;

public class WizytatorObwodu : IWizytator
{

    public void Odwiedź(Koło koło)
    {
        double obwód = 2 * Math.PI * koło.Promień;
        Console.Write("Obwód koła = ");
        Console.WriteLine(obwód);
    }

    public void Odwiedź(Kwadrat kwadrat)
    {
        double obwód = 4 * kwadrat.Bok;
        Console.Write("Obwód kwadratu = ");
        Console.WriteLine(obwód);
    }

}