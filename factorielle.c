#include <stdio.h>
#include <conio.h>
void main()
{
    int n,i,fact=1;
    printf("veyillez saisir un nombre: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        fact=fact*i;
    printf("la factorielle de %d est n!= %d",n,fact);


}
