using System;

namespace _21___Most
{
    class Program
    {
        static void Main()
        {
            IUrządzenie tv = new Telewizor();
            IUrządzenie wieża = new Wieża();

            Aplikacja smartHomeApp = new Aplikacja(tv);
            smartHomeApp.Uruchom();
            smartHomeApp.PrzełączUrządzenie(wieża);
            smartHomeApp.Uruchom();
            Pilot pilot_do_tv = new Pilot(tv);
            Pilot pilot_do_wieży = new Pilot(wieża);
            pilot_do_tv.Przycisz();
            pilot_do_wieży.Podgłośnij();
            PanelSterowania panelTv = new PanelSterowania(tv);
            panelTv.Konfiguruj();
            PanelSterowania panelWieży = new PanelSterowania(wieża);
            panelWieży.Konfiguruj();
        }
    }
}
