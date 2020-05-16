using System;

namespace _18___Interpreter
{

    class Program
    {
        static void Main()
        {
            Console.WriteLine("'if x<7 then y else 3', gdzie x=5, y=2:");
            Kontekst kontekst = new Kontekst();
            kontekst.zmienne["x"] = 5;
            kontekst.zmienne["y"] = 2;
            var wyrażenie = new WyrażenieWarunkowe(
                new WyrażenieMniejszeNiż(
                        new Zmienna("x"),
                        new Stała(7)
                    ),
                new Zmienna("y"),
                new Stała(3)
                );

            int wynik = wyrażenie.Interpretuj(kontekst);
            Console.WriteLine(wynik);
        }
    }
}
