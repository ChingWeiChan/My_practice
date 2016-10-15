#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int transform(char);
void result_1000(int a);
void result_100_10_1(int a,int r);
int m,k;
char n;
int main(void)
{
    int i,j;
    int int_num1=0,int_num2=0;
    char c_num1[4],c_num2[4];
    int result;

    while(1)
    {

        scanf("%s",&c_num1);
        if(c_num1[0]=='#')
            break;
        for(i=0; i<=strlen(c_num1); i++)
        {
            n=c_num1[i-1];
            int_num1+=transform(c_num1[i]);
        }

        scanf("%s",&c_num2);
        for(i=0; i<=strlen(c_num2); i++){
             n=c_num2[i-1];
            int_num2+=transform(c_num2[i]);
        }

        result=abs(int_num1-int_num2);

        if(result!=0)
        {
            if(result>=1000)
            {
                result_1000((int)result/1000);
                result%=1000;
            }
            if(result<1000 &&result>=100)
            {
                result_100_10_1((int)result/100,0);
                result%=100;
            }
            if(result<100&&result>=10)
            {

                result_100_10_1((int)result/10,1);
                result%=10;
            }
            if(result<10)
                result_100_10_1((int)result,2);
        }
        else
        {
            printf("ZERO");
        }

        printf("\n");
        int_num1=0;
        int_num2=0;
        c_num1[4]=0;
        c_num2[4]=0;


    }

}
int transform(char a)
{
    int num=0;
    switch(a)
    {

    case'I':
        num+=1;
        break;
    case'V':
        if(n=='I')
            num+=3;
            else
        num+=5;
        break;
    case'X':
        if(n=='I')
            num+=8;
            else
        num+=10;
        break;
    case'L':
        if(n=='X')
            num+=30;
            else
        num+=50;
        break;
    case'C':
        if(n=='X')
            num+=80;
            else
        num+=100;
        break;
    case'D':
        if(n=='C')
            num+=300;
            else
        num+=500;
        break;
    case'M':
        if(n=='C')
            num+=800;
            else
        num+=1000;
        break;
    }
    return num;
}

void result_1000(int a)
{
    for(k=1; k<=a; k++)
        printf("M");
}

void result_100_10_1(int a,int r)
{
    if(r==0)
        m=0;
    else if(r==1)
        m=1;
    else if(r==2)
        m=2;
    if(m==3)
        m=0;

    if(a==9)
    {
        if(m==0)
            printf("CM");
        else if(m==1)
            printf("XC");
        else if(m==2)
            printf("IX");
    }
    else if(a<9 && a>5)
    {
        if(m==0)
            printf("D");
        else if(m==1)
            printf("L");

        else if(m==2)
            printf("V");

        for(k=1; k<=(a-5); k++)
        {
            if(m==0)
                printf("C");
            else if(m==1)
                printf("X");

            else if(m==2)
                printf("I");

        }


    }
    else if(a==5)
    {
        if(m==0)
            printf("D");
        else if(m==1)
            printf("L");

        else if(m==2)
            printf("V");


    }
    else if(a==4)
    {
        if(m==0)
            printf("CD");
        else if(m==1)
            printf("XL");

        else if(m==2)
            printf("IV");


    }
    else if(a<4 && a>0)
    {
        for(k=1; k<=a; k++)
        {
            if(m==0)
                printf("C");
            else if(m==1)
                printf("X");

            else if(m==2)
                printf("I");
        }

    }
    m++;
}
