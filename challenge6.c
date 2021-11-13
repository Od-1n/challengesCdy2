#include<stdio.h>

int main ()
{

int ans,choix ;
printf("ecrit la valeur en annee : \n");
    scanf("%d",&ans);

printf("choisir de 1 a 5 : \n1: mois\n2: jours\n3: heures\n4: minutes\n5: secondes\n");
scanf("%d",&choix);

switch (choix)
{
case 1:
    printf("le nombre est  : %d mois", ans * 12 );
break;

case 2:
    printf("le nombre est : %d jours", ans * 365 );
break;

case 3:
    printf("le nombre est : %d heures", ans * 8760 );
break;

case 4:
    printf("le nombre est : %d minutes", ans * 525600 );
break;

case 5:
    printf("le nombre est : %d secondes", ans * 31536000 );
break;

default:
printf("veuillez choisir un nombre de 1 a 5 ");
scanf("%d",choix);
    break;
}
 
}
