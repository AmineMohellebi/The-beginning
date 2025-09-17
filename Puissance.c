#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 int main ()
 {
     float X, Y;
     float P;
     printf("veuillez saisir la valeur X: \n");
     scanf("%f", &X);
     printf("veuillez saisir la valeur Y: \n");
     scanf("%f", &Y);
     P = pow (X , Y);
     printf("la puissance Xy est: %f", P);
    return 0;

 }
