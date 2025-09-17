#include <stdio.h>
#include <stdlib.h>

 int main ()
 {
     int A, B, C;
     printf("veuillez saisir la valeur de A: \n");
     scanf("%d", &A);
    printf("veuillez saisir la valeur de B: \n");
     scanf("%d", &B);
     C = A;
     A = B;
     B = C;
     printf("la valeur de A est: %d \n", A);
     printf("la valeur de B est: %d", B);
return 0;
 }
