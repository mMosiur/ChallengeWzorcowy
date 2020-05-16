
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

public interface IWyrażenie {


    /// <summary>
    /// @param kontekst 
    /// @return
    /// </summary>
    public abstract int Interpretuj(Kontekst kontekst);

}