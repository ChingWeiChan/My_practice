#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(void){
   int input;
   int i;
   int count=0;
   while(scanf("%d",&input)!=EOF){
              for(i=2;i*i<=input;i++){
                            while(input%i==0){
                                count++;
                                input/=i; }
                            if(count>1&&input>1){
                                          printf("%d^%d * ",i,count);
                            }
                            else if(count>1&&input==1){
                                      printf("%d^%d\n",i,count);
                            }
                            else if(count==1&&input>1){
                                          printf("%d * ",i);
                            }
                            else if(count==1&&input==1){
                                          printf("%d\n",i);
                            }
                            count=0;

              }
  if(input>1)
               printf("%d\n",input);
}

}
