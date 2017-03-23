#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


int main (int c, char *argv[])
{
    for (;;) {
        fputs("test\n", stdout);
        printf("stdin is %d\n", (int)tcgetpgrp(0));
        printf("stdout is %d\n", (int)tcgetpgrp(1));
        sleep(5);
    }

    return EXIT_SUCCESS;
}
