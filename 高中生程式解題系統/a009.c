#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void declassify(char []);
void classify(char []);
char a[1000];
int i,leng;
int main(void)
{
              printf("If you want to declassify,then type '@'before the String!\n");
              printf("Or you want to classify,then type '#' !\n");
    while(gets(a)!=EOF)
    {

        if(a[0]=='@'){
              declassify(a);
        }
        else if(a[0]=='#'){
              classify(a);
        }

    }
}

void declassify(char a[])
{

    leng=strlen(a);
    for(i=1; i<leng; i++)
    {
        a[i]-=7;
        printf("%c",a[i]);
    }
    printf("\n");

    return;
}
void classify(char a[])
{

    leng=strlen(a);
    for(i=1; i<leng; i++)
    {
        a[i]+=7;
        printf("%c",a[i]);
    }
   printf("\n");
    return;
}


