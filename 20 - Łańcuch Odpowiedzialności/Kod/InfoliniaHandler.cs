using System;

public class InfoliniaHandler : PustyHandler
{

    public override void Obsłuż(Problem problem)
    {
        if (problem.złożoność < 5)
        {
            Console.WriteLine("Infolinia obsługuje problem: " + problem.opis);
        }
        else if (Następny() != null)
        {
            Następny().Obsłuż(problem);
        }
    }

}