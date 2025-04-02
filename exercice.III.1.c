#include <stdio.h>
#include <conio.h>
 void main()
 {
    char caractere;
    int code;
    printf("veillez saisir un caractere: ");
    scanf("%c",&caractere);
    code=(int)caractere;
    if ((code>=65)&&(code<=90))
     {
        code= code+32;
        printf("le caractere en mimuscule est:%c",code);
     }
    else
    {
        printf("le caractere n'est pas majuscule");
    }

 }
