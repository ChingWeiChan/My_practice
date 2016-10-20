#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <ctype.h>
void transfer(char str[],int length,int num[]);
int main(void){
	int i;
	char str[1000];
	printf("Input the String:");
    scanf("%s",&str);
    int length=strlen(str);
    int num[length];
    transfer(str,length,num);
  //  printf("%d\n",length); //test
//	puts(str); //	test
	

	return 0;
} 
 void transfer(char str[],int length,int num[]){
 	int i,tmp,j;
	for(i=0;i<length;i++){
		tmp=0;
		if(ispunct(str[i])){
		   	temp=i;
			   for(j=0;j<i;j++){
			   	  num[j]=(str[i-j-1]-48)*i;
			   }	
		}
	}
	
}    
