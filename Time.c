#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int temps;
    int heures, minutes, secondes;
    printf("veuillez saisir la valeur du temps:");
    scanf("%d", &temps);
    heures = temps / 3600;
    minutes = (temps % 3600)/60;
    secondes = temps % 60;
    printf("l'heure est:%d \n", heures);
    printf("les minutes sont:%d \n", minutes);
    printf("les secondes sont:%d \n", secondes);
return 0;
}
