#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float L, l;
    float S, P;
    printf("veuillez saisir la largeur du rectangle: \n");
    scanf("%f", &L);
    printf("veuillez saisir la longeure du rectangle: \n");
    scanf("%f",&l);
    S = L * l;
    P = (L+l) * 2;
    printf("le perimetre du rectangle est: = %f \n", P);
    printf("la surface du rectangle est: = %f \n", S);
return 0;
}
