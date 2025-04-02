#include <stdio.h>
#include <conio.h>
void main()
{
    int a,b,c,somme;
    float moy=0x1234;
    printf("Veuillez saisir un entier: ");
    scanf("%d",&a);
    fflush(stdin);
    printf("Veillez saisir un entier: ");
    scanf("%d",&b);
    fflush(stdin);
    printf("Veuillez saisir un entier: ");
    scanf("%d",&c);
    somme=a+b+c;
    moy=(somme/3);
    printf("la moyenne est :%5.2f",moy);
    getch();
}
