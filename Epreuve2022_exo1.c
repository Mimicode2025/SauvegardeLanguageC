#include <stdio.h>
#include <conio.h>
void main()
{
    float resultat;
    int n,y,i,X;
    print("resolution de l' equation 3x^n+x+1 ");

    if( x<0)
        printf("le resultat est 0");
    else
    {
        printf("veuillez saisir n:");
        scanf("%d",&n);
    }
    while (n<2 || n>9)
    {
        printf("la saisie est incorecte \n ");
        print("saisir n:");
        scanf("%d",&n);
    }
    //calcul de x^n
    y=1;
    for(i=1;i<n;i++)
    {
        y = y^x;
    }
    printf("%.2f^%d = %d \n",x,n,y);
    //y = x^n
    resultat =(3*y)+(x+1);
    printf("le resultat est: %.2f\n",resultat);
    getch();
}
