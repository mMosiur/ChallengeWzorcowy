
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

public class WyrażenieMniejszeNiż : WyrażenieNieterminalne
{


    private readonly IWyrażenieTerminalne a;

    private readonly IWyrażenieTerminalne b;

    public WyrażenieMniejszeNiż(IWyrażenieTerminalne a, IWyrażenieTerminalne b)
    {
        this.a = a;
        this.b = b;
    }

    public new int Interpretuj(Kontekst kontekst)
    {
        if (a.Interpretuj(kontekst) < b.Interpretuj(kontekst))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

}