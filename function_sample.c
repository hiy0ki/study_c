# include <stdio.h>

/*
関数プロトタイプの宣言

関数定義に先んじて関数の宣言が必要
main関数だけは必要ない

*/
void func1(void);
int getYear(void);


int main(void)
{

    printf("I love \n");
    func1();

    printf("Year : %d \n", getYear());

    return 0;
}


void func1(void)
{
    printf("C langage \n");
}


int getYear(void)
{
    return 2016;
}
