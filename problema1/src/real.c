#include "real.h"

void RealTransform(float value)
{
    int real = (int) value;
    int cent = (value - real) * 100 ;
    int real_bills[] = {200, 100, 50, 20, 10, 5, 2};
    int cent_coins[] = {50, 25, 10, 5, 1};
    int real_value[] = {0, 0, 0, 0, 0, 0, 0};
    int cent_value[] = {0, 0, 0, 0, 0};

    for (int i = 0; i < 7; i++)
    {
        real_value[i] = real / real_bills[i];
        real = real % real_bills[i];
        printf("%i nota(s) de %i reais\n", real_value[i], real_bills[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        cent_value[i] = cent / cent_coins[i];
        cent = cent % cent_coins[i];
        printf("%i moeda(s) de %i centavos\n", cent_value[i], cent_coins[i]);
    }
    // CORRIGIR ERRO QUANDO VALOR CHEGA NA MOEDA DE 1 CENTAVO.
}