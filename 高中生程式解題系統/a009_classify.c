#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void classify(char []);
char a[1000];
int i,leng;
int main(void)
{
    while(gets(a)!=EOF)
    {

        classify(a);

}
}

void classify(char a[])
{

    leng=strlen(a);
    for(i=0; i<leng; i++)
    {
        a[i]+=7;
    }
    puts(a);
    return;
}

