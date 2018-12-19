/*2_10 A+B 输入输出练习IV
题目描述

你的任务是计算若干整数的和。
输入

每行的第一个数N，表示本行后面有N个数。

如果N=0时，表示输入结束，且这一行不要计算。
输出

对于每一行数据需要在相应的行输出和。
样例输入

4 1 2 3 4
5 1 2 3 4 5
0 

样例输出

10
15

*/ 

#include<stdio.h>

int main(){
	int n,sum,num;
	sum=0;
	while(1){
		scanf("%d",&n);
		if(n){
			while(n--){
			scanf("%d",&num);
			sum+=num;
			}    
			printf("%d\n",sum); 
			sum=0; 	
		}
		else
			break;
	}                                   	
	return 0;
}
