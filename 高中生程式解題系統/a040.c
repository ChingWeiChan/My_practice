#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int Armstrong(char*); //transfer
void number(char*);   //num++
int main(void){
	int i,flag;
    char min[10],max[10],num[10];   //num is the value from min to max
    while(scanf("%s",&min)!=EOF){
    scanf("%s",&max);

    strcpy(num,min);   //num starts from the value of min
    flag=0; //control if

    for(i=0;i<(atoi(max)-atoi(min)+1);i++){
    	if(atoi(num)==Armstrong(num)){
    		printf("%s ",num);
    		flag=1;  //if flag=1 then must have  Armstrong number
		}
		if(i==(atoi(max)-atoi(min))-1){
		 if(flag==0)printf("none\n");
		 else if(flag==1)printf("\n");

	}
		number(num); //num ++

	}
}
   return 0;
}
int Armstrong(char* tmp){

	int i,j,digit=strlen(tmp); //number digit
	int sum=0;
	for(i=0;i<digit;i++){
			sum+=pow(tmp[i]-48,digit);
	}
	return sum;
}
void number(char *num){
	int tmp=atoi(num);
	tmp++;
	sprintf(num,"%d",tmp);

}
