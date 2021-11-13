#include<stdio.h>

char main()
{
char lettre ;
    printf("entrez une lettre :");
    scanf("%c",&lettre);

switch (lettre)
{
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
    printf("la lettre est une voyelle");
    break;

default:
    printf("la lettre est une consonnes ");
    break; 
}
}
