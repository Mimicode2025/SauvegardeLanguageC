#include <stdio.h>
#include <stdio.h>
void main()
{
    int i=1,n,fact=1;
    printf("veuillez saisir un nombre: ");
    scanf("%d",&n);
    while(i<=n)
    {
        fact=fact*i;
        i++;
    }
    printf("le factoriel n!= %d",n);

}
