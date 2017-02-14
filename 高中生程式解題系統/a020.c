/*  20170214   */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int transfer(char);
int main(void) {
	char num[11];
	int sum=0,i,j=0;
	while(gets(num)!=EOF){
	
		sum+=transfer(num[0]);
		for(i=8; i>0; i--) {
			sum+=(num[++j]-48)*i;
		}
		sum+=num[9]-48;
		if(sum%10==0) {
			printf("real\n");
		} else {
			printf("fake\n");
		}
	    sum=0;
		j=0;
	} 
		return 0;
	}
int transfer(char head) {
	switch(head) {
		case'A':
			return 1+0*9;
			break;
		case'B':
			return 1+1*9;
			break;
		case'C':
			return 1+2*9;
			break;
		case'D':
			return 1+3*9;
			break;
		case'E':
			return 1+4*9;
			break;
		case'F':
			return 1+5*9;
			break;
		case'G':
			return 1+6*9;
			break;
		case'H':
			return 1+7*9;
			break;
		case'I':
			return 3+4*9;
			break;
		case'J':
			return 1+8*9;
			break;
		case'K':
			return 1+9*9;
			break;
		case'l':
			return 2+0*9;
			break;
		case'M':
			return 2+1*9;
			break;
		case'N':
			return 2+2*9;
			break;
		case'O':
			return 3+5*9;
			break;
		case'P':
			return 2+3*9;
			break;
		case'Q':
			return 2+4*9;
			break;
		case'R':
			return 2+5*9;
			break;
		case'S':
			return 2+6*9;
			break;
		case'T':
			return 2+7*9;
			break;
		case'U':
			return 2+8*9;
			break;
		case'V':
			return 2+9*9;
			break;
		case'W':
			return 3+2*9;
			break;
		case'X':
			return 3+0*9;
			break;
		case'Y':
			return 3+1*9;
			break;
		case'Z':
			return 3+3*9;
			break;

	}
}
