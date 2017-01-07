#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <ctype.h>
/*
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
		   	tmp=i;
<<<<<<< HEAD
			   for(j=0;j<i;j++){
			   	  num[j]=(str[i-j-1]-48)*i;
			   }	
=======
			 
>>>>>>> origin/master
		}
	}
	
}    
 */
/*
 int main(void){
 	int i=0;
 
	 //LOOP
 //	char str[1000];
 //	puts(str); //test
 //	int tmp=strlen(str);
 //	char num[100][100];
    char str[100];	
    char num[99][100];
//	char num[100]; 
    gets(str);
  char *cut;
  cut=strtok(str,",");
  
   while(cut!=NULL){
   	i++;
   	strcpy(num[i],cut);
   	printf("%s\n",num[i]);
	   cut=strtok(NULL,",");
	   printf("cut:%x\n",&cut);
   }
   
// printf("%d",num[i]);
 return 0;
 	
 	
 }
 */
 
 
 int main(void){
 int i=0,j=0;
 int len,tot=1;
 char str[100];	
 char num[99][100];


  gets(str);  
  len=strlen(str);
 
 for(i=0;i<len;i++)  
 {
   if(str[i]==',') 
   {
   	
   	num[tot][j]=0;
   	tot++;
   	j=0;
	   }	
	   else
 	 	num[tot][j++]=str[i];
 }

  num[tot][j]=0;
  
  
   
 for(i=1;i<=tot;i++)   
 	printf("%d: %s \n",i,num[i]);
 	

 return 0;
 	
 	
 }
 
 
 
