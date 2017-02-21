#include<stdlib.h>
#include<stdio.h>

int main(void) {
	int num1,num2,i,gcd,min,max;
	while(scanf("%d %d",&num1,&num2)!=EOF){
	if(num1>=num2){
		max=num1;
		min=num2;
	}else{
		max=num2;
		min=num1;
	}
	

	for(i=1; i<=min;i++){
		if(min%i==0 && max%i==0){
			gcd=i;
		}
	}

		printf("%d\n",gcd);
}
	return 0;
}
