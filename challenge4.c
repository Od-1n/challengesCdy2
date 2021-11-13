#include<stdio.h>

int main ()
{
 int nombre1 , nombre2 , n;
 
 printf("entrer le premier nombre : ");
    scanf("%d",&nombre1);

 printf("entrer le deuxieme nombre : ");
    scanf("%d",&nombre2);

 n = !(nombre1 == nombre2) ? nombre1+nombre2 : (nombre1+nombre2)*3 ;
 printf("%d",n);


}