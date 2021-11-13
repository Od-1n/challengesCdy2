#include<stdio.h>
#include<math.h>

int main()
{
    printf("entrer a : ");
    int a ;
    scanf("%d",&a);

    printf("entrer b : ");
    int b ;
    scanf("%d",&b);


    printf("entrer c : ");
    int c ;
    scanf("%d",&c);
  
int delta ;
delta = (b*b)-4*a*c;


 if (delta < 0)
 {
     printf("%d \n",delta);
     printf("l'equation n'a pas de solution ");
 }
 else if (delta==0)
 {
     printf("%d \n",delta);
     printf("l'equation admet une seule solution X0 = %d",-b / (2 * a));
 }
 else if (delta > 0)
 {
     printf("%d \n",delta);
     printf("l'equation admet deux solutions qui sont X1 = %d et X2 = %d", (-b-sqrt( delta ) ) / ( 2 * a ), ( -b + sqrt( delta ) ) / ( 2 * a ));
 }
 else
 {
     printf("entrer une autre valeur");
 }
return 0;

}