#include<stdio.h>
#include<stdlib.h>
#define square(x) x*x
int main(void)
{
    int n;
    printf("Input:");
    scanf("%d",&n);
    printf("Output:%d\n",square(n));

    system("pause");
    return 0;
}
