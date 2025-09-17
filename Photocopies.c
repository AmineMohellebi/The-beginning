#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int P;
    float F;
    printf("entrez le nombre de photocopies: ");
    scanf("%d", &P);
    if (0 < P < 11)
    {
        F = P * 0.30;
        printf("la facture est: %.2f", F);
    }
    else if (10 < P < 31)
    {
        F = ((P - 10 )* 0.25) + 3;
        printf("la facture est: %.2f", F);
    }
    else if (P > 30)
    {
        F = ((P - 20) * 0.20) + 3 + 2.5;
        printf("la facture est: %.2f", F);
    }
return 0;
}
