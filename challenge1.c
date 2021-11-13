#include<stdio.h>

int main(){


    float F , C ;


    printf (" Type the tempo in Fahrenheit :\n") ;
    scanf ("%f" , &F) ;

    C = (F-32)* 0.5556;

    if (C < 0)
    {
        printf ("The tempo in celsius is : %0.2f it is very Cold "  , C ) ;
    }
    else if(C > 0 && C < 20 )
    {
        printf ("The tempo in Celcuis is : %0.2f it is Cold " , C ) ;
    }
    else if (C > 20 && C < 40)
    {
        printf ("The tempo in Celcuis is : %0.2f it is very Hot " , C ) ;
    }
    else 
    {
    printf ("The tempo in Celcuis is : %0.2f it is very Hot " , C);
    }
    return 0;

}
