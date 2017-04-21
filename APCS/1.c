#include <stdlib.h>
#include <stdio.h>
int main(int argc, char const *argv[]) {
        int i,j,k,sc[100],max,min,flag=0,tmp;
        scanf("%d",&i);
                                 for(j=0; j<i; j++) {
                scanf("%d",&sc[j] );
                if(sc[j]>60 && flag==0) {
                        max=sc[j];
                        flag=1;
                }
                if(j==0) {
                        min=sc[j];
                }
                else{
                        if(sc[j]<max && sc[j]>=60)
                                max=sc[j];
                        if(sc[j]>min && sc[j]<60)
                                min=sc[j];
                }
        }
        for(k=1; k<i; k++) {
                for(j=1; j<i; j++) {
                        if(sc[j]<sc[j-1]) {
                                tmp=sc[j];
                                sc[j]=sc[j-1];
                                sc[j-1]=tmp;
                        }
                }
        }
        for(j=0; j<i; j++){
          printf("%d ",sc[j]);
        }
        printf("\n");
        if(min>=60)
                printf("best case\n");
        else printf("%d\n",min);
        if(max<60 || flag==0)
                printf("worst case\n");
        else printf("%d\n",max);
        return 0;
}
