/*2_7指针
两个数按大小输出

题目描述

输入a和b两个整数，按先大后小的顺序输出a和b。注意请使用指针变量的方式进行比较和输出。
输入

两个用空格隔开的整数a和b。
输出

按先大后小的顺序输出a和b，用空格隔开。
请注意行尾输出换行。
样例输入

5 9

样例输出

9 5
*/



#include<stdio.h>

int main(){
	int a,b;
	int *i,*j;
	i=&a;
	j=&b;
	
	scanf("%d %d %d",&a,&b);
	if(*i>*j)
		printf("%d %d %d\n",*i,*j);
	else
		printf("%d %d\n",*j,*i);
	return 0;
}
