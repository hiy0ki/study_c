#include <stdio.h>

int main(void)
{
    char str[80];
    int i;

    printf("80文字以内の文字列を入力 : ");
    

    gets(str); // getsは安全ではないので注意
    for (i = 0; str[i]; i++)
        printf("%c \n",str[i]);

    return 0;
}
