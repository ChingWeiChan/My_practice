#include <stdlib.h>
#include <stdio.h>
// int change(char);
int wordtonum(char,char);
int main(int argc, char const *argv[]) {
  char word[7];
  int num[6];
  int i;
  while (scanf("%s", &word)!=EOF) {
  for (i = 0; i < 7; i++) {
      *(num+i)=wordtonum(word[i],word[i+1]);
  }
  for (i = 0; i < 6; i++) {
        printf("%d",num[i]);
  }
  printf("\n");
}
  return 0;
}
int wordtonum(char first,char last){

  int num1=first;
  int num2=last;
  return abs(num2-num1);
}
