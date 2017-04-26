#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char const *argv[]) {
  int a[]={1,2,3};
  printf("%d\n",sizeof(a)/sizeof(int) );
  memset(a,0,sizeof(a));
  for (size_t i = 0; i < sizeof(a)/sizeof(int); i++) {
    printf("%d ",*(a+i));
  }
  return 0;
}
