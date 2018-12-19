/*2-10 A+B 输入输出练习II
题目描述

你的任务是计算a+b。
输入

第一行是一个整数N，表示后面会有N行a和b，通过空格隔开。
输出
对于输入的每对a和b，你需要在相应的行输出a、b的和。
如第二对a和b，对应的和也输出在第二行。
样例输入

2
1 5
10 20

样例输出

6
30
*/

#include<stdio.h>

int main(){
	int a,b,n;
	scanf("%d",&n);
	while(n--){
		while(scanf("%d %d",&a,&b)!=EOF){
			printf("%d\n",a+b);
		}                                                             	
	}
	return 0;
}
