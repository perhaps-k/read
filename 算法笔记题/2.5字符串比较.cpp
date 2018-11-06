/*算法笔记2.5
字符串比较

题目描述

比较两个字符串s1和s2的大小，如果s1>s2，则输出一个正数；若s1=s2，则输出0；若s1<s2，则输出一个负数。

要求：不用strcpy函数；两个字符串用gets函数读入。

例如："A"与"C"相比，由于"A"<"C"，应输出负数，同时由于"A"与"C"的ASCII码差值为2，因此应输出"-2"。

同理："And"和"Aid"比较，根据第2个字符比较的结果，"n"比"i"大5，因此应该输出"5"
输入

输入2行字符串
输出
一个整数，表示这两个字符串 比较的差值，单独占一行。
样例输入

And
Aid

样例输出

5
*/

#include <stdio.h>
#include <string.h>

int main(){
	char s1[100],s2[100];
	int c,i=0;
	gets(s1);
	gets(s2);
	c=strcmp(s1,s2);
	if(c!=0){
		while(s1[i]==s2[i]){
			i++;
		}
		c=(int)(s1[i]-s2[i]);
	}
	printf("%d\n",c);
}


 
//int main(){
//	char s1[100],s2[100];
//	int i,j=0;
//	gets(s1);
//	gets(s2);
//	for(i=0;s1[i]!='\0'||s2[i]!='\0';i++){
//		if(s1[i]!=s2[i]){
//			j=(int)(s2[i]-s1[i]);
//			break;
//		}
//	}
//	if(s2[i]=='\0')
//		j=0;
//	printf("%d\n",j);
//	return 0;
//}
