#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[80] = "これはファイルシステムのテストです\n";
    FILE *fp;
    char *p;
    int i;

    if ((fp = fopen("myfile", "w")) == NULL) {
        printf("ファイルを開くことができません\n");
        exit(1);
    }

    p = str;
    while (*p) {
        if (fputc(*p, fp) == EOF) {
            printf("ファイル書き込みエラー\n");
            exit(1);
        }
        p++;
    }
    fclose(fp);

    if ((fp = fopen("myfile", "r")) == NULL) {
        printf("ファイルを開くことができません\n");
        exit(1);
    }

    for (;;) {
        i = fgetc(fp);
        if (i == EOF)
            break;
        putchar(i);
    }
    fclose(fp);
    
    return 0;
}
