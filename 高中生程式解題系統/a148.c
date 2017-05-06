#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[]) {
        int n;
        while(scanf(" %d",&n)!=EOF) {
                int *num[n];
                int sum=0;
                for (size_t i = 0; i < n; i++) {
                        scanf("%d",num+i);
                        sum+=(int)*(num+i);
                }
                if ((double)sum/n>59)
                        printf("no\n");
                else
                        printf("yes\n");
        }
        return 0;
}
