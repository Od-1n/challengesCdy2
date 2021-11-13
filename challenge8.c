#include<stdio.h>

int main()
{
    char l;

printf("entrez une lettre : ");
scanf("%c",&l);

    if ( l >= 65 && l <= 91 )
    {
        printf("Cette lettre est majuscule");
    }
    else
    {
        printf("Cette lettre est minuscule");
    }
    return l;
}
