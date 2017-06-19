#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
    FILE *from, *to;
    char ch;

    if (argc != 3) {
        printf("使用法; <プログラム名> <コピー元> <コピー先> \n");
        exit(1);
    }

    if ((from = fopen(argv[1], "rb")) == NULL) {
        printf("コピー元ファイルを開くことができません\n");
        exit(1);
    }

    if ((to = fopen(argv[2], "wb")) == NULL) {
        printf("コピー先ファイルを開くことができません\n");
        exit(1);
    }

    while (!feof(from)) {
        ch = fgetc(from);
        if(ferror(from)){
            printf("ファイル読み込みエラー\n");
            exit(1);
        }
        if (!feof(from)) {
            fputc(ch, to);
        }
        
        if (ferror(to)) {
            printf("ファイル書き込みエラー\n");
            exit(1);
        }
    }

    if (fclose(from) == EOF) {
        printf("ファイル閉じるときのエラー\n");
        exit(1);
    }

    if (fclose(to) == EOF) {
        printf("ファイル閉じるときのエラー\n");
        exit(1);
    }
}
