#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main ()
{
    int Xa, Ya, Xb, Yb;
    int X, Y;
    int d;
    printf("veuillez entrer les coordonnes du point A: \n");
    scanf("%d %d", &Xa, &Ya);
    printf("veuillez entrer les coordonnes du point B: \n");
    scanf("%d %d", &Xb, &Yb);
    X = pow(Xb-Xa,2);
    Y = pow(Yb-Ya,2);
    d = sqrt(X + Y);
    printf("la distance entre A et B c'est: %d", d);
return 0;
}
