#include <stdio.h>
#include <stdlib.h>
/*
====================================================
   in zerojudge:TLE
   I don't know what happen.
   I think it's the array too big.
====================================================

   int* prime_find(int);
   int main(int argc, char const *argv[]) {
        int min,max;
        while (scanf("%d %d",&min,&max)!=EOF) {
                int *prime=prime_find(max);
                int total=0,i=1;
                // printf("total:%d\n",*prime );
                      while (i<=*prime) {
                      if( *( prime+i) >=min && *( prime+i )<=max) total++;
                      i++;
                      }
                printf("%d\n",total);
        }
        return 0;
   }
   int* prime_find(int max){
        int total=1;
        static int prime[100000];
        prime[1]=2;
        for (int i = 3; i<=max; i++) {
                for (int j = 1; j<=total; j++) {
                        if (i%prime[j]==0) break;
                        if(j==total) {
                          prime[++total]=i;
                          // printf("prime[%d]=%d\n",total,prime[total]);
                        }
                }
        }
        prime[0]=total;
        return prime;
   }


 */

 /*


 ===================================================
 still TLE.....OH MY GOD.........

 ===================================================
int prime_find(int,int*);
int main(int argc, char const *argv[]) {
        int min,max;
        while (scanf("%d %d",&min,&max)!=EOF) {
                int *repeat;
                int a=0;
                repeat=&a;
                int max_prime=prime_find(max,repeat);
                int min_prime=prime_find(min,repeat);
                printf("%d\n",max_prime-min_prime);
        }
        return 0;
}
int  prime_find(int num,int *re){
        int total=0,tmp;
        for (int i=2; i<=num; i++) {
                tmp=0;
                for (int j = 2; j <i; j++) {
                        if (i%j==0) {
                                tmp++;
                                break;
                        }
                }
                if(tmp==0) {
                        total++;
                        if(i==num && *re==0) {
                                total++;
                                *re+=1;
                        }
                }
        }
        return total;
}
*/
