/*  20170214   */

/*TLE....*/
/* 20170216 think:function  describes too long.*/
#include<stdio.h>
#include<stdlib.h>
int transfer(char);
int main(void) {
	char num[11];
	int sum=0,i,j=0;
	while(scanf(" %c",&num[0])!=EOF){   
	/*key: before the %c need to add space 
	Introduction:
	http://squall.cs.ntou.edu.tw/cprog/Materials/ScanfIntroduction.html
	如果 % 之前加一空格的話代表跳過所有空格 (TAB、 space、 及 Enter) 字元，例如：
    char c;
    scanf("　%c",&c);
	*/
		scanf("%c%c%c%c%c%c%c%c%c",&num[1],&num[2],&num[3],&num[4],&num[5],&num[6],&num[7],&num[8],&num[9]);
		sum+=transfer(num[0]);
		for(i=8; i>0; i--) {
			sum+=(num[++j]-48)*i;
		}
		sum+=num[9]-48;
		if(sum%10==0) {
			printf("real\n");
		} else{
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
		case'L':
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
