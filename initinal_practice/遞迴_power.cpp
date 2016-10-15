#include<stdio.h>
#include<stdlib.h>
int power(int,int);
int main(void)
{
    printf("power(5,6)=%d\n",power(5,6));

    system("pause");
    return 0;
}
int power(int base,int n)
{
    if(n>0)
       return (base*power(base,n-1));
    else
       return 1;
       
    
    }
