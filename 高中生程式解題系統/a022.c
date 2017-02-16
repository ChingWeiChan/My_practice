#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void) {
	char str[1000];
	int length,i,flag;
	while(scanf("%s", &str)!=EOF) {

		flag=1;
		length=strlen(str);

		for(i=0; i<(int)length/2; i++) {

			if(str[i]!=str[length-i-1] ) {
				flag=0;
				printf("no\n");
				break;
			}

		}

		if(flag==1)printf("yes\n");
	}




	return 0;
}
