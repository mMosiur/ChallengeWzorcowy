using System;

public class AutomatycznaInfoliniaHandler : PustyHandler
{

    public override void Obsłuż(Problem problem)
    {
        if (problem.złożoność < 2)
        {
            Console.WriteLine("Automatyczna infolinia obsługuje problem: " + problem.opis);
        }
        else if (Następny() != null)
        {
            Następny().Obsłuż(problem);
        }
    }

}