#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    FILE *fptr;
    char ch;
    int count=0;
    fptr=fopen("c:\\test.txt","r");
    if(fptr!=NULL)
    {
                  while((ch=getc(fptr))!=EOF)
                  {
                                             printf("%c",ch);
                                             count++;
                                             }
 fclose(fptr);
 printf("總共有%d個字元\n",count);                 
                  
                  
                  }
else
{
    printf("Failed!");
    }
    system("pause");
    return 0;
}
