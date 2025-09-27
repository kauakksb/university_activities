#include <stdio.h>

void main()
{
    float peso_brutus = 122.0, peso_olivia = 45.0, altura_brutus = 1.84, altura_olivia = 1.76;
    float imc_brutus = 0, imc_olivia = 0, pm_brutus = 0, pm_olivia = 0;

    imc_brutus = peso_brutus / (altura_brutus * altura_brutus);
    imc_olivia = peso_olivia / (altura_olivia * altura_olivia);

    
    if(imc_brutus > 25)
    {
        pm_brutus = (imc_brutus - 25) * altura_brutus * altura_brutus;

    } else if (imc_brutus < 19)
    {
        pm_brutus = (19 - imc_brutus) * altura_brutus * altura_brutus;

    } else if (imc_brutus > 19 , imc_brutus < 25)
    {
        printf("O IMC esta adequado");
    }
    

    if(imc_olivia > 25)
    {
        pm_olivia = (imc_olivia - 25) * altura_olivia * altura_olivia;

    } else if (imc_olivia < 19)
    {
        pm_olivia = (19 - imc_olivia) * altura_olivia * altura_olivia;

    } else if (imc_olivia > 19 , imc_olivia < 25)
    {
        printf("O IMC esta adequado");
    }

    pm_brutus = (imc_brutus - 25) * (altura_brutus * altura_brutus);
    pm_olivia = (19 - imc_olivia) * (altura_olivia * altura_olivia);
    
    printf("%f ",pm_brutus);
    printf("%f", pm_olivia);
    
}