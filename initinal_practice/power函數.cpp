#include<stdio.h>
#include<stdlib.h>
double power(double,int); 
int main(void)
{
    double i;
    int n;
    printf("請輸入一個數:");
    scanf("%lf",&i);
    printf("請輸入次方:");
    scanf("%d",&n);
    printf("%lf的%d次方=%lf",i,n,power(i,n));
    printf("\n");
    system("pause");
    return 0;
}
double power(double i,int n)
{
       int a;
       for(a=1;a<=n;a++)
          i=i*n;
          return i;
       
       
       }
