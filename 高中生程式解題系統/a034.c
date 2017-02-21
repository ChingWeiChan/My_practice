#include<stdio.h>
#include<stdlib.h>
int main(void){
	int num;
	int end[100];
	int i,k;
	while(scanf(" %d",&num)!=EOF){
		i=0;
		while(1){
			end[i++]=num%2;
			if(num<2){
				break;
			}
			num/=2;
		}
		for(k=0;k<i;k++){
			printf("%d",end[i-k-1]);
		}
		printf("\n");
	}
	return 0;
} 
