#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main(void)
{
    int x,y;
    while(scanf("%d %d",&x,&y)!=EOF)
    {
        int *arr=(int*)malloc(x*y*sizeof(int));
        int i,j;
        for(i=0; i<x*y; i++)
            scanf("%d",arr+i);
        for(j=0; j<y;j++)
        {
            for(i=0; i<x; i++)
            {
                printf("%d ",*(arr+i*y+j));
            }
            printf("\n");
        }

        printf("\n");
        free(arr);


    }



}
