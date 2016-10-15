#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int a;
    start:
    printf("請輸入一個整數:");
    scanf("%d",&a);
    if(a>=0)
    {
       if(a%2!=0)
           printf("你輸入的為奇數\n");
       else
           printf("你輸入的為偶數\n");
}
    else
    {
       printf("請重新輸入\n");  
      
}
 goto start;

    system("pause");
    return 0;
}
