using System;

public class PomocTechnicznaHandler : PustyHandler
{
    
    public override void Obsłuż(Problem problem)
    {
        Console.WriteLine("Pomoc techniczna obsługuje problem: " + problem.opis);
    }

}