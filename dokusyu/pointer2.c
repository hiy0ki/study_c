#include <stdio.h>

int main()
{
    char str[] = "pointer is very happy. ";
    char *p;
    int i;

    p = str;

    // nullが見つかるまでループ
    for (i = 0; p[i]; i++) {
        printf("%c ", p[i]);
    }

    return 0;
}
