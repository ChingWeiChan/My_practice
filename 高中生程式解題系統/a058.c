#include <stdlib.h>
#include <stdio.h>
int main(int argc, char const *argv[]) {
        int i,j;
        int k,kp,kpp;
        while(scanf("%d",&i)!=EOF) {
                int a[i];
                k=0,kp=0,kpp=0;
                for(j=1; j<=i; j++) {
                        scanf("%d",&a[j]);
                }
                for(j=1; j<=i; j++) {
                        if(a[j]%3==0) {
                                k++;
                        }else if(a[j]%3==1) {
                                kp++;
                        }else if(a[j]%3==2) {
                                kpp++;
                        }

                }
                printf("%d %d %d\n",k,kp,kpp);
        }
        return 0;
}
