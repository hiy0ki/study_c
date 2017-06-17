#include <stdio.h>

int main()
{
    int a[3] = { 2, 3, 4 };
    // 添字なしの配列の変数名は配列の先頭を指すポインタになる
    printf("%d \n", *a); // == 2 or a[0]

    int *p;
    p = a;

    printf("%d \n", *p + 1); // == 3 or a[1]
    printf("%d \n", p[1]); // == 3 or a[1] ポインタが配列を指していれば、配列と同様に添え字が使える
}
