/*2_10 A+B 输入输出练习VIII
题目描述
你的任务是计算若干整数的和。
输入

输入的第一行为一个整数N，接下来N行每行先输入一个整数M，然后在同一行内输入M个整数。
输出
对于每组输入，输出M个数的和，每组输出之间输出一个空行。
样例输入

3
4 1 2 3 4
5 1 2 3 4 5
3 1 2 3

样例输出

10

15

6

*/

#include<stdio.h>

int main(){
	int n,m,num,sum;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&m);
		sum=0;
		while(m--){
			scanf("%d",&num);
			sum+=num;
		}
		printf("%d\n",sum);
		if(n>0)
			printf("\n");
	}
	return 0;
}
