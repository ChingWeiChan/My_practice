#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <ctype.h>
void transfer(char strstr[],char backstr[]);

int main(void){
	int i;
	char str[1000];
	char back[2][3];
	
	
	printf("Input the String:");
    scanf("%s",&str);
    int length=strlen(str);
    int num[length+1];
    printf("%d\n",length); 
    printf("%s\n",str); //test
    
    back[0][0]='A';
    back[0][1]='B';
    back[1][0]='C';
    back[1][1]='D';
   
    
    transfer(str,back[0]);
    
    printf("%s\n",str); //test
    
    printf("[0] : %s \n",back[0]); 
    printf("[1] : %s \n",back[1]); 
  
//	puts(str); //	test
	
 system("pause");
	return 0;
} 

 void transfer(char strstr[],char back[]) {
 	
 	strstr[1]='A';
 	 
    back[0]='P';
    back[1]='Q';
    back[2]='R';
    back[3]='S';
    
    strcpy(back,"XY");
    
	/*for(i=0;i<length;i++){
		if(ispunct(str[i])){
			
			
		}
	}
	*/
}    
