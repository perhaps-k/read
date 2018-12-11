/*算法笔记2.5
求字符串最大值 

题目描述
从键盘上输入3个字符串，求出其中最大者。
输入

输入3行，每行均为一个字符串。
输出
一行，输入三个字符串中最大者。
样例输入

England
China
America

样例输出

England
*/

#include<stdio.h>

int main(){
	char str1[100],str2[100],str3[100];
	int i=0;
	gets(str1);
	gets(str2);
	gets(str3);
	
	while(str1[i]==str2[i]&&str2[i]==str3[i])
	{
		i++;
	}
	if(str1[i]>str2[i]){
		if(str1[i]>str3[i])
			puts(str1);
	}
	else if(str1[i]<str2[i]){
		if(str2[i]>str3[i])
			puts(str2);
	}
	else{
		if(str1[i]<str3[i])
			puts(str3);
	}
	
	return 0;
}
