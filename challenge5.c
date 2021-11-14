#include <stdio.h>
#include <math.h>

int main(){
    int delta;
    int a,b,c;
    int x1,x2;
    printf("entrer les valeur de a,b et c:");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    delta=(b*b) - (4*a*c);
    if(delta > 0){
        x1=(-b-sqrt(delta))/(2*a);
        x2=(-b + sqrt(delta))/(2*a);
        printf("cette equation a deux solutions: x1= %d ,x2= %d",x1,x2);
    }
    else if(delta==0){
        x1= (-b)/(2*a);
        printf("cette equation a une solution x : %d",x1);
    }
    else{
        printf("cette equation n'a pas de solution");
    }
    
    
    
}
