#include <stdio.h>
#include <stdlib.h>

int main()
{
 const int date_actuelle = 2025;
 int date_naissance, age ;
 printf("veuillez saisir votre date de naissance: \n");
 scanf("%d", &date_naissance);
 age = date_actuelle - date_naissance ;
 printf("votre age est = %d", age);

    return 0;
}
