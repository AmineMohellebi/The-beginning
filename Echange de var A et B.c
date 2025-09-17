#include <stdio.h>
#include <stdlib.h>

 int main ()
 {
     int A, B;
     printf("veuillez saisir la valeur A:");
     scanf("%d", &A);
    printf("veuillez saisir la valeur B:");
     scanf("%d", &B);
    A = A + B;
    B = A - B;
    A = A - B;
    printf("la valeur de A est: %d \n", A);
    printf("la valeur de B est: %d \n", B);
return 0;
 }
