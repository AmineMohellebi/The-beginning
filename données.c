#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float A, B;
    float C;
    float S, P;
    printf("la valeur de A:");
    scanf("%f", &A);
    printf("la valeur de B:");
    scanf("%f", &B);
    if (A*B > 0)
    {
      C = A;
      A = B;
      B = C;
      printf("la valeur de A est: %.2f \n", A);
      printf("la valeur de B est: %.2f \n", B);
    }
    else
    {
       S = A + B;
       P = A * B;
       printf("la valeur de A est: %.2f \n", S);
       printf("la valeur de B est: %.2f \n", P);
    }
return 0;
}
