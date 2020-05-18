using System;

public class WizytatorPola : IWizytator
{

    public void Odwiedź(Koło koło)
    {
        double pole = Math.PI * Math.Pow(koło.Promień, 2);
        Console.Write("Pole koła = ");
        Console.WriteLine(pole);
    }

    public void Odwiedź(Kwadrat kwadrat)
    {
        double pole = Math.Pow(kwadrat.Bok, 2);
        Console.Write("Pole kwadratu = ");
        Console.WriteLine(pole);
    }

}