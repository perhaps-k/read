/*2_7 指针
三个数按大小输出 

题目描述

输入a、b、c三个整数，按先大后小的顺序输出a、b和c。注意请使用指针变量的方式进行比较和输出。
输入

三个用空格隔开的整数a、b和c。
输出

按先大后小的顺序输出a、b和c，用空格隔开。
请注意行尾输出换行。
样例输入

9 0 10

样例输出

10 9 0
*/
#include<stdio.h>

int main(){
	int a,b,c;
	int *i,*j,*k;
	i=&a;
	j=&b;
	k=&c;
	scanf("%d %d %d",&a,&b,&c);
	if(*i>*j){
		if(*k>*i)
			printf("%d %d %d\n",*k,*i,*j);
		else if(*k<*j)
			printf("%d %d %d\n",*i,*j,*k);
		else
			printf("%d %d %d\n",*i,*k,*j);
	}
	else{
		if(*k<*i)
			printf("%d %d %d\n",*j,*i,*k);
		else if(*k>*j)
			printf("%d %d %d\n",*k,*j,*i);
		else
			printf("%d %d %d\n",*j,*k,*i);
	}
	return 0;
}
