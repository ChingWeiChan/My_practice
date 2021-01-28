//高位數加法 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/* 
void ASCII_change0(int);

int main(void) {
	char number1[100]= {'0'};
	char number2[100]= {'0'};
	printf("InputNumber_1:");
	scanf("%s",number1);
	int length=strlen(number1);  //|r|eao?×
	printf("InputNumber_2:");
	scanf("%s",number2);
	int length_2=strlen(number2);  //|r|eao?×
	int k; //|Pao?×
	if(length>length_2) {
		k=length;
	} else {
		k=length_2;
	}
	int opp_number1[k]= {0};
	int opp_number2[k]= {0};
	int sum[k+1]= {0};
	int i;   //LOOP
	for(i=1; i<=k; i++) {
		if(length>length_2){
		
		opp_number1[i]=number1[k-i]-'0';
		opp_number2[k-i]=number2[k-i]-'0';
		ASCII_change0(opp_number1[i]);
		ASCII_change0(opp_number2[k-i]);
		 }
		 else if(length<length_2){
		 	
		opp_number1[k-i]=number1[k-i]-'0';
		opp_number2[i]=number2[k-i]-'0';
		ASCII_change0(opp_number1[k-i]);
		ASCII_change0(opp_number2[i]);
		 }else{
		 	
		opp_number1[i]=number1[k-i]-'0';
		opp_number2[i]=number2[k-i]-'0';
		ASCII_change0(opp_number1[i]);
		ASCII_change0(opp_number2[i]);
		 }
		 

	}
for(i=1; i<=k; i++){
	printf(" number%d",opp_number1[i]);   //檢查輸出(測試用) 
}
printf("\n");
for(i=1; i<=k; i++){
	printf(" 2number%d",opp_number2[i]);  // 檢查輸出(測試用) 
}
printf("\n") ;

	for(i=1; i<=k; i++) {                                   
		sum[i]=opp_number1[i]+opp_number2[i];
		if(sum[i-1]>=10 && i>1) {
			sum[i-1]-=10;                                            
			sum[i]++;
		}
		printf("  sum%d",sum[i]);      //檢查輸出(測試用)  
	}
	printf("\n");

	for(i=k; i>=1; i--)
		printf(" %d",sum[i]);     //實際輸出 
	return 0;
}
void ASCII_change0(int k){
		if(k==-48) {
			k=0;
		}
		if(k==-48) {
			k=0;
		}
}

*/
#include <conio.h>
int main(void){
int tmp[1000],tmp_2[1000],one[1000]={0},two[1000]={0},sum[1000]={0};
int keyboard,length;
int max_1=0,max_2=0,i,j=0;
printf("Input number1:");
do{
	keyboard=getch();
	if(keyboard>=48 && keyboard<=57){
		putch(keyboard);
	        max_1++;
	tmp[max_1]=keyboard-48;
	}
}while(keyboard!=13);
for(i=1;i<=max_1;i++) one[i]=tmp[max_1-i+1];
one[0]=max_1;
fflush(stdin);
printf("\nInput number2:");
do{
		keyboard=getch();
	if(keyboard>=48 && keyboard<=57){
		putch(keyboard);
	        max_2++;
	tmp[max_2]=keyboard-48;
      }
}while(keyboard!=13);

for(i=1;i<=max_2;i++) two[i]=tmp[max_2-i+1];
two[0]=max_2;

//test
/*
for(i=1;i<=max_1;i++) printf("\n one %d\n",one[i]);
for(i=1;i<=max_2;i++) printf("\n two %d\n",two[i]);
*/
if(max_1>max_2){
	length=max_1;
}else{
	length=max_2;
}
for(i=1;i<=length;i++){
   sum[length-i+1]=one[i]+two[i];
    if(j!=0){
    	sum[length-i+1]++;
    	j=0;
	}
	
	if(sum[length-i+1]>=10){
		sum[length-i+1]-=10;
		j++;
	}
}
if(j!=0 && i==length+1){
	sum[0]++;
}
//test
printf("\nSum:");
if(sum[0]!=0) printf("%d",sum[0]);
for(i=1;i<=length;i++){
   printf("%d",sum[i]);
}
printf("\n");
printf(" Number1 %d 位數\n",max_1);
printf(" Number2 %d 位數\n",max_2);
if(sum[0]!=0)printf(" Sum %d 位數\n",length+1);
else printf(" Sum %d 位數\n",length);

}
















