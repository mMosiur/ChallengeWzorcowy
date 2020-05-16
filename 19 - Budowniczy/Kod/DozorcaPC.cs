
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

public class DozorcaPC
{

    private IBudowniczyPC budowniczy;

    public DozorcaPC(IBudowniczyPC budowniczy)
    {
        this.budowniczy = budowniczy;
    }

    public void Zmień_budowniczego(IBudowniczyPC budowniczy)
    {
        this.budowniczy = budowniczy;
    }

    public PC Pc_bez_gpu()
    {
        budowniczy.Zbuduj_płytę_główną();
        budowniczy.Zbuduj_cpu();
        budowniczy.Zbuduj_ram();
        return budowniczy.Zbudowany_pc();
    }

    public PC Pc_z_gpu()
    {
        budowniczy.Zbuduj_płytę_główną();
        budowniczy.Zbuduj_cpu();
        budowniczy.Zbuduj_ram();
        budowniczy.Zbuduj_gpu();
        return budowniczy.Zbudowany_pc();
    }

}