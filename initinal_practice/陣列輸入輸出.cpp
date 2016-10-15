#include<stdio.h>
#include<stdlib.h>

int main(void)
{
 int i,age[3];
 for(i=0;i<3;i++)
 {
    printf("Input:");
    scanf("%d",&age[i]);
     }
 for(i=0;i<=2;i++)
  printf("Output age[%d]:%d\n",i,age[i]);
    system("pause");
    return 0;
}
