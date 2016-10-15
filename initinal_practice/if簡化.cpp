#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int a,b,c;
    printf("輸入兩個數:");
    scanf("%d %d",&a,&b);
    a>b ? (c=a):(c=b);
    printf("%d大",c);
    system("pause");
    return 0;
}
