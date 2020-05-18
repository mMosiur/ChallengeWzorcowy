namespace _23___Wizytator
{
    class Program
    {
        static void Main()
        {
            IWizytator[] wizytatorzy = {
                new WizytatorObwodu(),
                new WizytatorPola()
            };
            IKształt[] kształty = {
                new Koło(1),
                new Kwadrat(2)
            };
            foreach (IKształt kształt in kształty)
            {
                foreach (IWizytator wizytator in wizytatorzy)
                {
                    kształt.Przyjmij(wizytator);
                }
            }

        }
    }
}
