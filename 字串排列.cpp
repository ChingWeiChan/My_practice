#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <ctype.h>
void transfer(char *str[],int length,int* num[]);
int main(void){
	int i;
	char *str[1000];
	printf("Input the String:");
    gets(*str);
    int length=strlen(*str);
    int *num[length+1];
    transfer(str,length,num);
   // printf("%d",length); //test
//	puts(*str); //	test
	

	return 0;
} 
void transfer(char *str[],int length,int *num[]){
	for(i=0;i<length;i++){
		if(ispunct(str[i])){
			
		}
	}
	
}
