#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int A, B;
    printf("entrer la valeur du A:");
    scanf("%d", &A);
    printf("entrer la valeur du B:");
    scanf("%d", &B);
    if (A*B > 0)
    printf("A et B sont du meme signe");
    else if (A*B < 0)
        printf("A et B ne sont pas du meme signe");
    else
        printf("A et B sont nul");
return 0;
}
