using System;

namespace _22___Pyłek
{
    class Program
    {
        static void Main()
        {
            FabrykaPyłków fabryka = new FabrykaPyłków();
            var przeszukiwaczPi1 = new PrzeszukiwaczLiczby(
                fabryka.ZwróćPyłek("pi")
            );
            var przeszukiwaczE1 = new PrzeszukiwaczLiczby(
                fabryka.ZwróćPyłek("e")
            );
            var przeszukiwaczPi2 = new PrzeszukiwaczLiczby(
                fabryka.ZwróćPyłek("pi")
            );
            przeszukiwaczPi2.UstawPozycję(10);
            var przeszukiwaczE2 = new PrzeszukiwaczLiczby(
                fabryka.ZwróćPyłek("e")
            );
            przeszukiwaczE2.UstawPozycję(10);
            Console.WriteLine("PrzeszukiwaczPi1: "+przeszukiwaczPi1.OdczytajCyfrę());
            Console.WriteLine("PrzeszukiwaczE1: " + przeszukiwaczE1.OdczytajCyfrę());
            Console.WriteLine("PrzeszukiwaczPi2: " + przeszukiwaczPi2.OdczytajCyfrę());
            Console.WriteLine("PrzeszukiwaczE2: " + przeszukiwaczE2.OdczytajCyfrę());
        }
    }
}
