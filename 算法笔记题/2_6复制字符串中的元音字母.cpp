/*算法笔记2_6 
复制字符串中的元音字母

题目描述
写一个函数，将一个字符串中的元音字母复制到另一个字符串中。在主函数中输入一个字符串，通过调用该函数，得到一个有该字符串中的元音字母组成的一个字符串，并输出。
输入

一个字符串（一行字符）。
输出
该字符串所有元音字母构成的字符串。行尾换行。
样例输入

CLanguage

样例输出

auae

提示


可以采用如下函数原型


void vowels(char s1[], char s2[]);

*/

#include<stdio.h>

void vowels(char a[],char b[]){
	int i,j=0;
	for(i=0;a[i]!='\0';i++){
		if(a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='i'||a[i]=='I'||a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U'){
			b[j]=a[i];
			j++;
		}
	}
	b[j]='\0';
} 


int main(){
	char a[100],b[100];
	gets(a);
	vowels(a,b);
	puts(b);
	return 0;
}
