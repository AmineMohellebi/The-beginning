#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int nmbr;
    printf("veuillez saisir un nombre: ");
    scanf("%d", &nmbr);
    switch (nmbr){
    case 1 :
    printf("le jour de semaine est: Dimanche");
    break;
    case 2 :
    printf("le jour de semaine est: Lundi");
    break;
    case 3 :
    printf("le jour de semaine est: Mardi");
    break;
    case 4 :
    printf("le jour de semaine est: Mercredi");
    break;
    case 5 :
    printf("le jour de semaine est: Jeudi");
    break;
    case 6 :
    printf("le jour de semaine est: Vendredi");
    break;
    case 7 :
    printf("le jour de semaine est: Samedi");
    break;
    default:
        printf("le nombre est incorrecte");
        break;
    }
return 0;
}
