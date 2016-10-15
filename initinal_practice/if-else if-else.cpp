#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int score;
    while(1){
    printf("輸入成績:");
    scanf("%d",&score);
    if(score>=90 and score<=100)
            printf("阿不就好棒棒\n");
       else if(score>=60)
            printf("給你糖果一顆\n");
       else if(score>=0)
            printf("爛透了，下一位\n");
    else
            printf("你騙誰?\n");
    }

    system("pause");
    return 0;
}
