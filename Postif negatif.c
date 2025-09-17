#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int N;
    printf("entrer un nombre N:");
    scanf("%d", &N);
    if (N > 0)
        printf("ce nombre N est: positif");
    else if (N < 0)
        printf("ce nombre N est: negatif");
    else
            printf("ce nombre N est: nul");
return 0;
}
