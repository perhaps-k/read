/*2_7 指针 指针比较三个字符串大小 
题目描述

输入3个字符串，按从小到大的顺序输出。要求使用指针的方法进行处理。
输入

3行，每行一个用字符串。保证每个字符串的长度不超过20。
输出

按从小到大的顺序输出这3个字符串，每个字符串一行。
请注意行尾输出换行。
样例输入

China
CLOCK
deal

样例输出

CLOCK
China
deal

*/ 


#include<stdio.h>
#include <string.h>

void comp_3(char* &i, char* &j,char* &k){
	if(strcmp(i,j)>0&&strcmp(i,k)>0){
		if(strcmp(j,k)>0){
			puts(k);
			puts(j);
			puts(i);
		}
		else{
			puts(j);
			puts(k);
			puts(i);
		}
	}
	else if(strcmp(j,i)>0&&strcmp(j,k)>0){
		if(strcmp(i,k)>0){
			puts(k);
			puts(i);
			puts(j);
		}
		else{
			puts(i);
			puts(k);
			puts(j);
		}
	}
	else{
		if(strcmp(i,j)>0){
			puts(j);
			puts(i);
			puts(k);
		}
		else{
			puts(i);
			puts(j);
			puts(k);
		}
	}
}

int main (){
	char a[30],b[30],c[30];
	char *p,*q,*r;
	//int count=0;
	
	p=a;
	q=b;
	r=c;
	
	scanf("%s",a);
	scanf("%s",b);
	scanf("%s",c);
	
	comp_3(p,q,r);
	
	return 0;
}
