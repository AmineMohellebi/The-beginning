#include <stdio.h>
#include <stdlib.h>

 int main ()
 {
     float X, Y;
     float S, P, D, d;
     printf("veuillez saisir la valeur X: \n");
         scanf("%f", &X);
     printf("veuillez saisir la valeur Y: \n");
         scanf("%f", &Y);
    S = X + Y;
    P = X * Y;
    D = X - Y;
    d = X / Y;
    printf("la somme est: %.2f \n", S);
    printf("le produit est: %.2f \n", P);
    printf("la difference est: %.2f \n", D);
    printf("la division est: %.2f \n", d);
return 0;
 }
