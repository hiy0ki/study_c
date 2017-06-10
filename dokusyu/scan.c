#include <stdio.h>

int ss(int);

int main(void)
{
    int num;
    scanf("%d", &num);
    printf("%d \n", ss(num));
}

int ss(int x)
{
    return x * x;
}
