#include <ctype.h>
#include <stdio.h>

int main()
{
    char str[80];
    int i;
    printf("文字列を入力してください; ");
    gets(str);

    for (i = 0; str[i]; i++)
        str[i] = toupper(str[i]);

    // 大文字
    printf("%s\n", str);

    for (i = 0; str[i]; i++)
        str[i] = tolower(str[i]);

    // 小文字
    printf("%s\n", str);

    return 0;
}
