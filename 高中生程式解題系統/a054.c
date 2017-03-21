#include <stdio.h>
#include <stdlib.h>
typedef struct {
        char word;
        int num;
}try;
try trys[]={
        {'A',1},
        {'B',10},
        {'C',19},
        {'D',28},
        {'E',37},
        {'F',46},
        {'G',55},
        {'H',64},
        {'I',39},
        {'J',73},
        {'K',82},
        {'L',2},
        {'M',11},
        {'N',20},
        {'O',48},
        {'P',29},
        {'Q',38},
        {'R',47},
        {'S',56},
        {'T',65},
        {'U',74},
        {'V',83},
        {'W',21},
        {'X',3},
        {'Y',12},
        {'Z',30}
};
int main(int argc, char const *argv[]) {

        char num[9];
        int i,j,sum;
        while (scanf(" %s",&num)!=EOF) {
                sum=0; j=8;
                for(i=0; i<8; i++) {

                        sum+=(*(num+i)-48)*(j--);


                }
                for (i=0; i<26; i++) {
                   if((*(num+8)-48+trys[i].num+sum)%10==0)
                                printf("%c",trys[i].word);
                }
                printf("\n");
        }
        return 0;
}
