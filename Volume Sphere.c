#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 int main ()
 {
     const float Pi = 3.14 ;
     float V, r;
     printf("veuillez saisir la valeur du rayon r: \n");
     scanf("%f", &r);
     V = (4 * Pi * pow(r,3))/ 3;
         printf("le volume du sphere est: %.2f", V);
    return 0;

 }
