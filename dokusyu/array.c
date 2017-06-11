#include <stdio.h>
#include <string.h>

int main()
{
    int a[10];

    a[1] = 100;
    printf("%d \n", a[1]);
    printf("%d \n", a[2]); // == 0

    char str[80];
    strcpy(str, "hello");
    strcat(str, "hello");
    printf("%s \n", str);

    int a2[5] = {1,2,3,4};
    printf("%d \n", a2[1]);

    char c[6] = "hello";
    printf("%s \n", c);

    int i[] = { 1,3,5,6,7,7 };
    printf("%d \n", i[2]);

    char hello[] = "world";
    printf("%s \n", hello);

/*
    // これはサイズが変わるのでエラーになる
    strcpy(hello, "hogehgeohgeooioi");
    printf("%s \n", hello);
*/
    char name[3][80] = {
        "hoge",
        "fuga",
        "hohoho",
    };

    printf("%s \n", name[2]);


    return 0;
}
