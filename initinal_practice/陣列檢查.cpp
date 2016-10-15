#include<stdio.h>
#include<stdlib.h>

int main(void)
{
 int score[10];
 int i=0,num;
 float sum=0.0f;
 printf("Input the score and button 0 for end:\n");
 do
{
               if(i==10)
               {
                         printf("陣列空間己用完!\n");
                         i++;
                         break;
                         }
                         printf("Input:");
                         scanf("%d",&score[i]);
                         
               }while(score[i++]>0);
               num=i-1;
 for(i=0;i<num;i++)
    sum+=score[i];
    printf("Output:%.1f\n",sum/num);
                  
    system("pause");
    return 0;
}
