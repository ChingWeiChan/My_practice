#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char const *argv[]) {
        int i,j;
        char input[100];
        scanf("%s",&input);

        if  (strlen(input)%2==0) j=1;  else j=0;

        for (i = strlen(input)-1; i >=0; i--) {

                if ( (i+j)%2==0 || (i+j)==0 ) {
                        if (input[i]=='9') input[i]='0';
                        else               input[i]++;
              }
              else
              {
                        if (input[i]=='0') input[i]='9';
                        else               input[i]--;
              }
        }

        printf("\n");
        for (i = 0; i < strlen(input); i++) printf("%c",input[i] );
        printf("\n");
        return 0;
}
