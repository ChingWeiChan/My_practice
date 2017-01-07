
#include <stdlib.h>
#include <stdio.h>
int stop(void);
int flag;
int main(void)
{

    int arr[9][9];
    int i,j,k,l;
    while(scanf("%d",*(arr))!=EOF)
    {
        flag=0;
        for(j=0; j<9; j++)
        {
            for(i=0; i<9; i++)
            {
                if(i==0 && j==0)
                    continue;
                scanf("%d",*(arr+j)+i);

            }

        }


        for(j=0; j<9; j++)
        {
            for(i=0; i<9; i++)
            {

                for(k=1; k<=i; k++)
                {
                    if(j-k>=0)
                    {

                        if(*(*(arr+j)+i)==*(*(arr+j)+i-k)  || *(*(arr+j)+i)==*(*(arr+j-k)+i))
                        {
                            stop();
                            break;
                        }
                    }
                }
                if(flag==1)break;

                if(j==0 || j==3 || j==6 )
                {
                    for(l=1; l<=2; l++)
                    {
                        if(i==0 || i==3 || i==6)
                        {
                            if(*(*(arr+j)+i)==*(*(arr+j+1)+i+l)|| *(*(arr+j)+i)==*(*(arr+j+2)+i+l))
                            {
                                stop();
                                break;
                            }
                        }
                        else if(i==1 || i==4 || i==7)
                        {
                            if(*(*(arr+j)+i)==*(*(arr+j+l)+i-1)|| *(*(arr+j)+i)==*(*(arr+j+l)+i+1))
                            {
                                stop();
                                break;
                            }
                        }
                        else if(i==2 || i==5 || i==8)
                        {
                            if(*(*(arr+j)+i)==*(*(arr+j+1)+i-l)|| *(*(arr+j)+i)==*(*(arr+j+2)+i-l))
                            {
                                stop();
                                break;
                            }
                        }
                    }
                }

                if(flag==1)break;
            }
            if(flag==1)break;
        }
        if(flag==0)printf("yes\n");

    }
}
int stop()
{
    printf("no\n");
    flag=+1;
    return flag;
}

