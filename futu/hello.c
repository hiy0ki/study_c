#include <stdio.h>

// buildについて、もしa.out以外で作りたかったら -o オプションを付ける
// 例えば、 gcc -o hello hello.c みたいな感じ

int main(int argc, char *argv[])
{
    printf("hello World!\n");
    return 0;
}