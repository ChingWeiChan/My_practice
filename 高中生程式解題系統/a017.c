
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void) {
	char arr[50];
	char tmp[50][50];
	int i=0,i_max;
	int sum=0;
	scanf("%[^\n]",arr);
	char *cut;
	const char* space=" ";
	cut=strtok(arr, space);
	strcpy(tmp[i],cut);
	while(cut!=NULL) {
		printf("%d : %s\n",i,tmp[i]);   //test
		cut=strtok(NULL,space);
		if (cut!=NULL) {
			strcpy(tmp[++i],cut);
		}
	}

	i_max=i;
	i=0;
	while(i<=i_max) {
		switch(tmp[++i][0]) {
			case'*':
				if(tmp[i-2][0]=='*') {
					sum*=atoi(tmp[i+1]);
				} else {
					sum+=atoi(tmp[i-1])*atoi(tmp[i+1]);
				}
				break;
			case'/':
				if(tmp[i-2][0]=='/') {
					sum/=atoi(tmp[i+1]);
				} else {
					sum+=atoi(tmp[i-1])/atoi(tmp[i+1]);
				}
				break;
			case'%':
				sum+=atoi(tmp[i-1])%atoi(tmp[i+1]);
				break;
			case'+':
				if(tmp[i+2][0]!='*' && tmp[i+2][0]!='/') {
					if(i==1) {
						sum+=atoi(tmp[i-1])+atoi(tmp[i+1]);
					} else {
						sum+=atoi(tmp[i+1]);
					}
				} else {
					if(i==1) {
						sum+=atoi(tmp[i-1]);
					}
				}

				break;
			case'-':
				if(tmp[i+2][0]!='*' && tmp[i+2][0]!='/') {

					if(i==1) {
						sum+=atoi(tmp[i-1])-atoi(tmp[i+1]);
					} else {
						sum-=atoi(tmp[i+1]);
					}
				}else{
					if(i==1) {
						sum+=atoi(tmp[i-1]);
					}
				}
				break;
		}

	}
	printf("Sum: %d\n",sum);
	return 0;
}


