#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void split(char **arr,char *str, const char *del) {
        char *s=strtok(str, del);
        int count=0;
        while (s !=NULL) {
                *arr++=s;
                s=strtok(NULL, del);

        }
}
int main(int argc, char const *argv[]) {
        char score[100];
        const char *del=" ";
        char *arr[100];
        int sum=0;
        int count;
        while (scanf("%s ",&score)!=EOF) {
                split(arr, score, del);
                printf("%d\n",count);

                for (size_t i = 0; i <   ; i++)
                        sum+=*(arr+i);

                if (sum/strlen(arr)>=60) printf("yes\n");
                else printf("no\n");
                sum=0;
                memset(score,'\0',strlen(score));
                // printf("%c\n",score[0] );

        }
        return 0;
}
