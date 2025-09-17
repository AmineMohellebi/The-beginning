#include <stdio.h>
#include <stdlib.h>

 int main ()
 {
     float N1 , N2, N3, N4, N5;
     float S, M;
     printf("veuillez saisir cinq notes: \n");
     scanf("%f %f %f %f %f", &N1, &N2, &N3, &N4, &N5);
     S = N1 + N2 + N3 + N4 + N5;
     M= S / 5;
     printf("la somme des notes est: %.2f \n", S);
     printf("la moyenne est: %.2f", M);
return 0;
 }
