#include<stdlib.h>
#include<stdio.h>
int find(int,int);
int main(void){
  int hm,i,j;
  while(scanf("%d",&hm)!=EOF){
    int num[hm*2];
    for(i=0;i<hm*2;i++){
      scanf("%d",num+i);
    }
    j=1;
  for(i=0;i<hm*2;i+=2){
    printf("Case %d: %d\n",j++,find(*(num+i),*(num+i+1)) );
  }

}
return 0;
}

int find(int min,int max){
  int i;
  int sum=0;
  for(i=1;i*i<=max;i++)
    if(i*i>=min && i*i<=max)
      sum+=i*i;
  return sum;
}
