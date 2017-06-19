#include <stdio.h>
#define MAX 100
#define FUN "面白い"
#define ADD_MAX MAX + 1

int main()
{
    printf("%d \n", MAX);
    printf("%s \n", FUN);
    printf("%s \n", "FUN"); // これは置換されない
    printf("%d \n", ADD_MAX);
}
