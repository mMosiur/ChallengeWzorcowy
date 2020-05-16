
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

public class WyrażenieWarunkowe : WyrażenieNieterminalne
{

    public readonly WyrażenieMniejszeNiż porównanie;

    public readonly IWyrażenieTerminalne prawda;

    public readonly IWyrażenieTerminalne fałsz;

    public WyrażenieWarunkowe(WyrażenieMniejszeNiż porównanie, IWyrażenieTerminalne prawda, IWyrażenieTerminalne fałsz)
    {
        this.porównanie = porównanie;
        this.prawda = prawda;
        this.fałsz = fałsz;
    }

    public new int Interpretuj(Kontekst kontekst)
    {
        if(porównanie.Interpretuj(kontekst) != 0)
        {
            return prawda.Interpretuj(kontekst);
        }
        else
        {
            return fałsz.Interpretuj(kontekst);
        }
    }

}