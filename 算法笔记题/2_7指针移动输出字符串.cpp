/*2_7 指针 
指针移动输出字符串 
题目描述

给定字符串定义char *a = “I love China!”，读入整数n，输出在进行了a = a + n这个赋值操作以后字符指针a对应的字符串。
输入

一个整数n，保证0<=n<13.
输出

输出进行了题目描述中赋值操作之后a对应的字符串。
请注意行尾输出换行。
样例输入

7

样例输出

China!
*/

#include<stdio.h>
#include <string.h>

int main(){
	char *a="I love China!";
	int n;
	scanf("%d",&n);
	a+=n;
	puts(a);
	return 0;
}
