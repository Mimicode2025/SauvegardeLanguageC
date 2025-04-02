#include <stdio.h>
#include <conio.h>
void main()
{
int prix_HT;
float prix_TVA,prix_TTC;
char type;
printf("veillez saisir le prix hors taxe du produit: ");
scanf("%d",&prix_HT);
printf("veuillez saisir le type\n ");
scanf("%c",&type);
while (type!='A'&& type!='B')
{
printf("le type est incorrecte\n");
printf("type: ");
type=getchar();
}
if (type=='A')
    prix_TVA=(prix_HT*(55.0/1000));
else if (type=='B')
    prix_TVA=(prix_HT*(18.0/100));
prix_TTC=(prix_HT*(prix_TVA+1));
printf("le prix TVA est: %.2f\n ",prix_TVA);
printf("le prix TTC est: %.2f\n ",prix_TTC);
getch();

}
