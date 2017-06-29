#include<stdio.h>
#include<stdlib.h>
int main()
{
	long max; //prime maxium
	long i,j,a; //loop
	long total=0;
	int tmp=0;
	printf("Please input the maxium:");
	scanf("%d",&max);
	
	for(i=2;i<=max;i++)
	{
		tmp=0;
		for(j=2;j*j<=i;j++)
		{
			if(i%j==0) 
			{
			tmp++;
			break;
			}
		}
	
		if(tmp==0)
		{
			printf("%d\n",i);
			total++;
			a=i;
		}
	}
	printf("在%d內最大的質數:%d\n",max,a);
	printf("Total: %d",total);
	return 0;
}
