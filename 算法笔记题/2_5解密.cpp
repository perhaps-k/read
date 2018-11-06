/*算法笔记2.5——数组
解密

题目描述

有一行电文，已按如下规律译成密码：

A-->Z        a-->z

B-->Y        b-->y

C-->X        c-->x

......          ......

即第一个字母变成第26个字母，第i个字母变成第（26-i+1)个字母，非字母字符不变。要求根据密码译回原文，并输出。
输入
输入一行密文
输出
解密后的原文，单独占一行。
样例输入

ZYX123zyx

样例输出

ABC123abc 

*/


#include <stdio.h>

 
int main(){
	char ch;
	ch=getchar();
	while(ch!='\n'){
		if(ch>='A'&&ch<='Z'){
			printf("%c",'A'+'Z'-ch);
		}
		else if(ch>='a'&&ch<='z'){
			printf("%c",'a'+'z'-ch);
		}
		else {
			printf("%c",ch);
		}
		ch=getchar();
	}
	return 0;
}
