using System;

namespace _20___Łańcuch_Odpowiedzialności
{
    class Program
    {
        static void Main()
        {
            IHandler pomocTechniczna = new PomocTechnicznaHandler();
            IHandler infolinia = new InfoliniaHandler();
            infolinia.UstawNastępny(pomocTechniczna);
            IHandler automatycznaInfolinia = new AutomatycznaInfoliniaHandler();
            automatycznaInfolinia.UstawNastępny(infolinia);
            IHandler telefonDoFirmy = new PustyHandler();
            telefonDoFirmy.UstawNastępny(automatycznaInfolinia);

            telefonDoFirmy.Obsłuż(
                new Problem { złożoność = 1, opis = "Zapomniałem hasła" }
            );

            telefonDoFirmy.Obsłuż(
                new Problem { złożoność = 3, opis = "Nie wiem, jak się robi to i to" }
            );

            telefonDoFirmy.Obsłuż(
                new Problem { złożoność = 7, opis = "Nie działa mi to i to" }
            );

        }
    }
}
