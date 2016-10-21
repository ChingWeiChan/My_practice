#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <ctype.h>
void transfer(char strstr[],int * backstr);

int main(void){
	int i;
	char str[1000];
	int  back[2][3];
	
	
	printf("Input the String:");
    scanf("%s",&str);
    int length=strlen(str);
    int num[length+1];
    printf("%d\n",length); 
    printf("%s\n",str); //test
    
    back[0][0]=11;
    back[0][1]=12;
    back[0][2]=13;
    back[1][0]=14;
    back[1][1]=15;
    back[1][2]=16;
     
    
    transfer(str,back[0]);
    
    printf("%s\n",str); //test
    
    printf("[0][0] : %d \n",back[0][0]); 
    printf("[0][1] : %d \n",back[0][1]); 
    printf("[0][2] : %d \n",back[0][2]); 
    printf("[1][0] : %d \n",back[1][0]); 
    printf("[1][1] : %d \n",back[1][1]); 
    printf("[1][2] : %d \n",back[1][2]); 
  
//	puts(str); //	test
	
 system("pause");
	return 0;
} 

 void transfer(char strstr[],int * back){
 	
 	strstr[1]='A';
 	 
    back[0]=21;
    back[1]=22;
    back[2]=23;
    back[3]=24;
    back[4]=25;
    back[5]=26;
    
	/*for(i=0;i<length;i++){
		if(ispunct(str[i])){
			
			
		}
	}
	*/
}    
