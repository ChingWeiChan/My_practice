#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int b;
    int a,sum=0;
    int n;
    printf("請選擇你要的計算\n");
    printf("1+....n之中總合請按1\n");
    printf("1到....n之中2的倍數總合請按2\n");
    printf("1到....n之中3的倍數總合請按3\n");
    printf("請輸入選項:");
    scanf("%d",&b);
    if(b==1)
    {
        int a=1;
        printf("In put:");
        scanf("%d",&n);
        while(a<=n)
        {
            sum+=a;
            a++;
        }
        printf("1+....+%d=%d\n",n,sum);
    }
    else if(b==2)
    {
        int a=2;
        printf("In put:");
        scanf("%d",&n);
        if(n%2==0)
        {

            while(a<=n)
            {
                sum+=a;
                a+=2;
            }

        }
        else if(n%2>=1 or n%2<0)
        {
            while(a<=n-1)
            {
                sum+=a;
                a+=2;
            }

        }
    }
    else if(b==3)
    {
        int a=3;
        printf("In put:");
        scanf("%d",&n);
        if(n%3==0)
        {
            while(a<=n)
            {
                sum+=a;
                a+=3;
            }
        }
        else if(n%3==1)
        {
            while(a<=n-1)
            {
                sum+=a;
                a+=3;
            }
        }
        else if(n%3==2)
        {
            while(a<=n-2)
            {
                sum+=a;
                a+=3;
            }
        }
    }
    printf("Out put:%d",sum);

    system("pause");
    return 0;
}
