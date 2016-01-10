#include <stdio.h>
#include <conio.h>

int main(void)
{

    char ch;

    printf("１文字入力してください: ");
    ch = getche();
    
    printf("\n このASCIIコードは %d です\n", ch);

    return 0;
}
