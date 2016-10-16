#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void ASCII_change0(int);

int main(void) {
	char number1[100]= {'0'};
	char number2[100]= {'0'};
	printf("InputNumber_1:");
	scanf("%s",number1);
	int length=strlen(number1);  //字串長度
	printf("InputNumber_2:");
	scanf("%s",number2);
	int length_2=strlen(number2);  //字串長度
	int k; //同長度
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
	printf(" number%d",opp_number1[i]);
}
printf("\n");
for(i=1; i<=k; i++){
	printf(" 2number%d",opp_number2[i]);
}

	for(i=1; i<=k; i++) {
		sum[i]=opp_number1[i]+opp_number2[i];
		if(sum[i-1]>=10 && i>1) {
			sum[i-1]-=10;
			sum[i]++;
		}
		printf("  sum%d",sum[i]);
	}

	for(i=k; i>=1; i--)
		printf(" %d",sum[i]);
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



