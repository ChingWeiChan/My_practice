#include <stdio.h>
#include <stdio.h>
int main(int argc, char const *argv[]) {
        int input;
        while (scanf("%d",&input)!=EOF) {
                if (input==0) break;
                for (size_t i = 1; i < input; i++) {
                        if(i%7==0)
                                continue;
                        printf("%d ",i );

                }
                printf("\n");
        }
        return 0;
}
