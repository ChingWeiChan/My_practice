//Â²©ö¶Ã¼Æ±Æ¦C
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
void bubble_sort(int*,int);
int main(void) {
	int i,j,k;
	srand((unsigned)time(NULL));
	printf("Please input the number:");
	scanf("%d",&j);
	printf("number_max:");
	scanf("%d",&k);
	int num[j];
	printf("Not sort:\n");
	for(i=0; i<j; i++) {
		num[i]=rand()%k;
		printf(" %d\n",num[i]);
	}
	bubble_sort(num,j);
	printf("from minimum to maximum:\n");
	for(i=0;i<j;i++)
	    printf(" %d\n",num[i]);
	return 0;

}
void bubble_sort(int num[],int k) {
	printf("%d",k);
	int i,j,m;
	for(i=0; i<k; i++) {
		for(j=0; j<k; j++) {
			if(num[j]>num[j+1]) {
				m=num[j+1];
				num[j+1]=num[j];
				num[j]=m;
			}
		}
	}
}

