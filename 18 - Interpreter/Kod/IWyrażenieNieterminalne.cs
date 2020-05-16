
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

public interface IWyrażenieNieterminalne : IWyrażenie
{

    /// <summary>
    /// @param kontekst 
    /// @return
    /// </summary>
    public new abstract int Interpretuj(Kontekst kontekst);

}