#include <stdio.h>

int main(void)
{

    int answer = 12;
    int input_num;

    printf("###### start 数当てゲーム ####### \n");

    for(int i = 9; i >= 0; i--)
    {
        printf("整数を入力してください \n");
        scanf("%d", &input_num);

        if( input_num == answer )
        {
            printf("正解です！\n");
            return 0;
        }else if(input_num > answer) {
            printf("入力値は正解の値より大きいです\n");
        }else{
            printf("入力値は正解の値より小さいです\n");
        }

        printf("残り %d 回 答えれます \n", i);
    }
    

    printf("残念! またチャレンジしてください \n");


    return 0;
}
