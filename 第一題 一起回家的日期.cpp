/*花蓮高中

第一題 一起回家的日期
問題敘述
李伯伯年紀很大了，常常記不清楚自己的小孩什麼時候會回來老家看看他。而且每個小孩都事業有成，非常忙碌，像大兒子每15天回老家一趟、大女兒住比較近，可以每3天回來一趟。李伯伯希望有人可以幫幫他，算出什麼時候他的小孩們會一起回來看他。

輸入說明：
第一行是李伯伯總共有N個小孩。
第二行則有N個數字代表小孩個別回家的時間，每個數字以空格隔開。
第三行是最近一次全部小孩一起回家的日期，格式為YYYY/MM/DD。

輸出說明：
共一行。輸出下次一起回家的日期，日期格式為YYYY/MM/DD。

輸入範例
4
4 5 12 21
2015/10/10

輸出範例
2016/12/05
*/ 
#include<stdlib.h>
#include<stdio.h>
void bubble_sort(int*, int);
int  multiple(int*);
short n_child;
//int primes[N + 1] = {0}; //質數陣列 
//void create(int*);       //建立質數表 
//void filter(int*, int);   //建立質數表 (清除質數之倍數) */ 
int main(void){
   // create(primes);
   
	scanf("%d",&n_child);   //幾個小孩
	int day[n_child-1];    //建立小孩回家時間之陣列
	int TheSameDay;     //時間最大公倍數 
   bubble_sort(day[],n_child);
   
}
void bubble_sort(int num[],int k) {
	printf("%d",k);
	int i,j,m;
	for(i=0; i<k; i++) {
		for(j=0; j<k; j++) {
			if(num[j]>num[j+1]) {
				m=num[j+1];
				num[j+1]=num[j];
				num[j]=m;
			}
		}
	}
}
int  multiple(int day[]){
	int i,j,k;
	int max=day[n_child-1];
	for(i=2; i<=max; i++) {
		for(j=2; j<i; j++) {
			if(i%j==0 && i>2){ 
			  k++;
		      break;	   
			}
			}
			if(k!=0){
			    k=0;
				continue;
				}
	for(k=)						
			}
}



