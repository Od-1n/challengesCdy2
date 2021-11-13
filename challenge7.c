#include<stdio.h>

int main ()
{
    int n; 
        printf("ecrivez un nombre :  ");
        
        scanf("%d",&n);

    if ( n < 0 )
    {
        printf("votre nombre est negatif");
    }
    else if (n > 0)
    {
        printf("votre nombre est positif");
    }
    else 
    
        printf("votre nombre = 0");    
return 0;
}