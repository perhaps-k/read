/*2_10 A+B 输入输出练习V
题目描述

你的任务是计算若干整数的和。
输入

输入的第一行是一个正数N，表示后面有N行。每一行的第一个数是M，表示本行后面还有M个数。
输出

对于每一行数据需要在相应的行输出和。
样例输入

2
4 1 2 3 4
5 1 2 3 4 5

样例输出

10
15
*/

#include<stdio.h>

int main(){
	int n,m,sum,num;
	
	scanf("%d",&n);
	while(n--){
		sum=0;
		scanf("%d",&m);
		while(m--){
			scanf("%d",&num);
			sum+=num;	
		}
		printf("%d\n",sum);
	}          	
	return 0;
}
