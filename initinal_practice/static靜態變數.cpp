#include<stdio.h>
#include<stdlib.h>
void func(void);
int main(void)
{
    int i,n;
    printf("Input:");
    scanf("%d",&n);
    printf("\n");
    for(i=1;i<=n;i++)
         func();

    system("pause");
    return 0;
}
void func(void)
{
     static int a=100;
     printf("\"%d\"\n",a);
     a=a+100; 
     }

