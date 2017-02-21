#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void){
	char num[100];
	int length,i,flag;
	while(scanf(" %s",&num)!=EOF){
		flag=0;
		length=strlen(num);
		for(i=0;i<=length;i++){

			if(flag==0){
			if(num[length-i-2]!='0')flag=1;
			if(num[length-i-1]=='0')
			{
				if(i==length-1){       /* P.S 有一組測試為全0*/
					printf("0");
				}
			continue;
		}
			}
			
			printf("%c",num[length-i-1]);
		}
		printf("\n");
	}
	
	
	
	return 0;
}
