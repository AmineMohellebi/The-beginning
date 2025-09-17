#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int P;
    float F;
    printf("entrez le nombre de photocopies: ");
    scanf("%d", &P);
    if (P < 11)
    {
        F = P * 0.30;
        printf("la facture est: %.2f", F);
    }
    else if (10 < P < 21)
    {
        F = (P * 0.25);
        printf("la facture est: %.2f", F);
    }
    else if (P > 30)
    {
        F = (P* 0.20);
        printf("la facture est: %.2f", F);
    }
return 0;
}

