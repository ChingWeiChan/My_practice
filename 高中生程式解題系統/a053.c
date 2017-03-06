#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[]) {
        int s;
        while(scanf("%d",&s)!=EOF) {
                if(s>40)
                        printf("100\n");
                else if (s>=21 && s<=40)
                        printf("%d\n",10*(6+2)+(s-20));
                else if (s>=11 && s<=20)
                        printf("%d\n",10*6+(s-10)*2);
                else if(s>=0 && s<=10)
                        printf("%d\n",s*6);
                /* code */
        }
        return 0;
}
