#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(void)
{
  char ch;
  
  while(ch!=32)
  {
     
     printf("請輸入一個字元:");
     ch=getche();
     printf("\n");
     printf("\n");
     printf("你輸入的按鍵是:%c\n",ch);
     printf("\n");
     printf("ASCII碼為%d\n",ch);
     printf("\n");
     printf("-----------------------------");
     printf("\n");
     
     }
     printf("你己經輸入了space\n");
    system("pause");
    return 0;
}
