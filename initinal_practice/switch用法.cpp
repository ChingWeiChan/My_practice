#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    printf("¿é¤J¦¨ÁZ:");
    char c;
    scanf("%c",&c);
    switch(c) 
    {
          case 'a':
          case 'A':
          printf("Great!\n");
          break;
          case 'b':
          case 'B':
          printf("Normal!\n");
          break;
          case 'c':
          case 'C':
          printf("Failed!\n");
          break;
    default:
          printf("type again!\n");
             
          }
    system("pause");
    return 0;
}
