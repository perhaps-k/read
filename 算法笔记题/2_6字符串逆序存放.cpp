/*算法笔记2.6
字符串逆序存放

题目描述
写一个函数将一个字符串按反序存放。在主函数中输入一个字符串，通过调用该函数，得到该字符串按反序存放后的字符串，并输出。
输入
一行字符串。
输出
输入字符串反序存放后的字符串。单独占一行。
样例输入

abcd

样例输出

dcba

*/ 

#include<stdio.h>
#include <string.h>

void reversed(char a[],int n){
	int i,temp;
	for(i=0;i<n/2;i++){
		temp=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=temp;
	}
} 


int main(){
	char a[100];
	gets(a);
	reversed(a,strlen(a));
	puts(a);
	return 0;
}
