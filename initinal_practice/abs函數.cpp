#include<stdio.h>
#include<stdlib.h>
int abs(int);
int main(void)
{
    int i;
    printf("Input a integer:");
    scanf("%d",&i);
    printf("abs(%d)=%d",i,abs(i));
    

    system("pause");
    return 0;
}
int abs(int n)
{
    if(n>0)
        return n;
    else if(n<0)
        return -n;
    else
        printf("false!");        
    
    }
