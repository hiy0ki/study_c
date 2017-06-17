#include <stdio.h>
#include <string.h>


int main()
{
    char s1[] = "Pointers are fun to use.";
    char s2[80], *p1, *p2;

    // pが文字列1の末尾を指すようにする
    printf("%p \n", s1);
    printf("%s \n", s1);
    p1 = s1 + strlen(s1) -1;
    printf("%lu \n", strlen(s1));
    printf("%p \n", p1);

    p2 = s2;

    while (p1 >= s1) {
        *p2 = *p1;
        p1--;
        p2++;
    }

    *p2 = '\n';

    printf("%s %s", s1,s2);

    return 0;
}
