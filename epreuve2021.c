#include <stdio.h>
#include <conio.h>
void main()
{
    int a,b,m;

    do {
      printf("Veuillez saisir votre poids: ");
      scanf("%d",&a);

      printf("Veillez saisir votre taille: ");
      scanf("%d",&b);

      if (a < 0)
        printf("le poids est incorecte\n");

     if (b < 0)
        printf("la taille est incorecte\n");

      }
    while ((a < 0 )||(b < 0));

     printf("votre poids est %d Kg\n" ,a);

     printf("votre taille est %d m\n",b);

    if(b % 2 != 0)
        m=a*(b-1)+b;
    else
        m=(a*b)+(b/2);
    printf("votre quantite de nourriture journaliere est: %dKg ",m);
    getch();
}

