/*算法笔记2.5——数组
数组元素逆置

题目描述

将一个长度为10的整型数组中的值按逆序重新存放。

如：原来的顺序为1,2,3,4,5,6,7,8,9,0，要求改为0,9,8,7,6,5,4,3,2,1
输入

从键盘上输入以空格分隔的10个整数。
输出
按相反的顺序输出这10个数，每个数占一行。
样例输入

1 2 3 4 5 6 7 8 9 0

样例输出

0
9
8
7
6
5
4
3
2
1 
*/

#include <stdio.h>

 
int main(){
	int a[10],i;
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	for(i=9;i>=0;i--){
		printf("%d\n",a[i]);
	}
	return 0;
}
