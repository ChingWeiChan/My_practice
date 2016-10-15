#include<stdio.h>
#include<stdlib.h>
int fac( int);
int main(void)
{
    printf("Output:%d\n",fac(15));

    system("pause");
    return 0;
}
 int fac(int n)
{
    if (n>0)
       return(n*fac(n-1));
    else
       return 1;
    
    
    }
