using System;

namespace _19___Budowniczy
{
    class Program
    {
        static void Main()
        {
            DozorcaPC dozorca = new DozorcaPC(new BudowniczyPCamd());
            PC pc1 = dozorca.Pc_z_gpu();
            pc1.Wyświetl();
            dozorca.Zmień_budowniczego(new BudowniczyPCintel());
            PC pc2 = dozorca.Pc_bez_gpu();
            pc2.Wyświetl();
        }
    }
}
