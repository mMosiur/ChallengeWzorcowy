
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

public class BudowniczyPCamd : IBudowniczyPC
{

    private PC pc;


    public void Zbuduj_płytę_główną()
    {
        pc.płyta_główna = "Jakaś płyta główna";
    }

    public void Zbuduj_cpu()
    {
        pc.cpu = "Procesor AMD";
    }

    public void Zbuduj_ram()
    {
        pc.ram = "Jakieś kości RAM";
    }

    public void Zbuduj_gpu()
    {
        pc.gpu = "Karta graficzna AMD";
    }

    public PC Zbudowany_pc()
    {
        return this.pc;
    }

}