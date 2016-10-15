#include<stdio.h>
#include<stdlib.h>
/*從1加到多少才能超過5050*/ 
int main(void)
{
   int i=1,sum=0;
   while(sum<=5050)
    {
      sum+=i;
      printf("從1加到%d=%4d\n",i,sum);
      i++       ;    
                   }
   printf("必須累加%d次\n",i-1);
    system("pause");
    return 0;
}
