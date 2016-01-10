#include <stdio.h>



int main(void)
{
    int x,y;

    printf("pls input 2 num \n 1 : ");
    scanf("%d", &x);
    printf("2 : ");
    scanf("%d", &y);

    if( x > y ) 
    {
        printf("1は2より大きい \n");
    } else if ( x == y ) {
        printf("1と2は同じ \n");
    } else {
        printf("1は2より小さい \n");
    }

    

    return 0;
}
