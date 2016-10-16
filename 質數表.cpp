//簡易質數表
#include<stdlib.h>
#include<stdio.h>
/*
int main(void) {
	int i,j,k=0,m=0;  //LOOP
	int max;  //範圍之最大值
	printf("Please input the maxium:");
	scanf("%d",&max);
		for(i=2; i<=max; i++) {
		for(j=2; j<i; j++) {
			if(i%j==0 && i>2){ 
			  k++;
		      break;	   
			}
			}
			if(k!=0){
			    k=0;
				continue;
				}
			printf("%d\n",i);
			m++;
			}
	printf("共 %d 個\n",m);
	return 0;
}
*/
/*
int main(void) {
	int i,j,total;  //LOOP
	int max;  //範圍之最大值
	printf("Please input the maxium:");
	scanf("%d",&max);
	
	total=1;
	printf("2\n");
		for(i=3; i<=max; i++) {
		for(j=2; j<i; j++) if(i%j==0)break;
		if(j==i){
			total++;
			printf("%d\n",i);
		}	   
		}
		printf("Total : %d\n",total);
	return 0;
}
*/
int main(void) {
	int i,j,k,total;  //LOOP
	int max;  //範圍之最大值
	int prime[10000]; //prime
	printf("Please input the maxium:");
	scanf("%d",&max);
	
	total=1;
	prime[1]=2;
		for(i=3; i<=max; i++) {
		for(j=1; j<=total; j++) if(i%prime[j]==0)break;
		if(j>total){
			total++;
			prime[total]=i;
		}	   
		}
	for(k=1;k<=total;k++){
		printf("%d\n",prime[k]);
	}
	printf("Total: %d \n",total);
	return 0;
}





