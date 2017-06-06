#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
char *buf;

fgets(buf, 1024, stdin);
printf("%s\n", buf);
return 1;
}

