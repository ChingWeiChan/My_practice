#include <stdlib.h>
#include <stdio.h>
int main(int argc, char const *argv[]) {
  int k,tmp,i,j;
  while(scanf(" %d",&k)!=EOF){
    int num[k];
    for (i=0;i<k;i++) {
      scanf(" %d",&num[i]);
    }
    for(i=0;i<k;i++){
      for ( j = 0; j < k; j++) {
        if(num[j]>num[j+1] && j!=k-1){
          tmp=num[j+1];
          num[j+1]=num[j];
          num[j]=tmp;
        }
      }
    }
    for (i = 0; i <k-1; i++) {
      printf("%d ",num[i]);

    }
 printf("%d",num[k-1]);
 printf("\n");
  }
  return 0;
}
