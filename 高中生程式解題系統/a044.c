#include <stdlib.h>
#include <stdio.h>
int main(int argc, char const *argv[]) {
        int n;
        while( scanf("%d",&n)!=EOF) {
                if(n==1) printf("2\n");
                else printf("%d\n",(n+1)*(n*n-n+6)/6);
        }


        return 0;
}
