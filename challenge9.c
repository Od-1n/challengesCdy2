#include <stdio.h>

int main(){
    int nb1;
    int nb2;
    printf("entrer nb1 : ");
    scanf("%d",&nb1);
    printf("entrer nb2 : ");
    scanf("%d",&nb2);
    nb1<nb2 ? printf("%d est le max",nb2) : printf("%d est le max",nb1);
    
}
