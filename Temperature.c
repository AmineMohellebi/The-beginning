#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float C;
    printf("veuillez saisir la temerature de l'eau C: ");
    scanf("%f", &C);
    if (C < 0)
        printf("l'etat d'eau est: Glace");
    else if (C > 100)
        printf("l'etat d'eau est: Vapeur");
    else
    printf("l'etat d'eau est: Liquide");
return 0;
}
