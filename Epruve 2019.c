#include <stdio.h>
#include <conio.h>
void main()
{
int prix1,prix2,somme;
    printf("Veillez saisir le prix de l'article de l'homme: ");
    scanf("%d",&prix1);

    printf("Veuillez saisir le prix de l'article de la femme: ");
    scanf("%d",&prix2);

        somme=prix1+prix2;
        if (prix1<prix2)
        {
            printf("Madame,vous devez payer une facture de %d FCFA ",somme);
        }
        else
        {
        printf("Monsieur,vous devez payer une facture de %d FCFA ",somme);
        }
    getch();
}
