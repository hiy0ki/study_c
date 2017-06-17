#include <stdio.h>

int main()
{
    int *p, q;

    q = 120;
    p = &q; // get q's address

    // show address
    printf("%p \n", p);
    // show value
    printf("%d \n", *p);

    *p = 111;

    // show address
    printf("%p \n", p);
    // show value
    printf("%d \n", *p);



    int a[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    int *pp;
    // pp に先頭のアドレスを代入する。
    // 添字をつけずに配列名だけを使うと、配列の先頭を指すポインタが生成される。
    pp = a;

    printf(" %d \n", *pp); // == a[0];

    printf(" %d \n", *(pp + 1)); // == a[1];

    // 代入してみる
    int ao = *(pp + 3);

    printf(" %d \n", ao); // == a[3];

    return 0;
}
