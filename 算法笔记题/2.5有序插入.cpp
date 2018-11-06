/*算法笔记2.5小节——数组
有序插入
 
题目描述

有一个已排好序的数组，要求输入一个数后，按原来排序的规律将它插入到数组中。

假设数组长度为10，数组中前9个数（这9个数要求从键盘上输入，输入时要满足自小到大的输入顺序）已经按从小到大进行排序。

然后再从键盘上输入一个整数，将此整数插入到前有序的9个数中，使得最终的10个数依然是从小到大有序的。
输入

第一行输入以空格分隔的9个整数数，要求按从小到大的顺序输入。

第二行输入一个整数
输出
从小到大输出这10个数，每个数一行。
样例输入

1 11 21 31 41 51 61 71 81
45

样例输出

1
11
21
31
41
45
51
61
71
81

提示

定义数组时，把数组长度定义为10.*/

#include <stdio.h>

 
int main(){
	int a[10],i,j,n,temp;
	for (i=0;i<9;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&n);
	for(i=0;i<8;i++){
		if(a[i]<n&&a[i+1]>n) 
			break;
	}
	for(j=8;j>i;j--){
		a[j+1]=a[j];
	}
	a[i+1]=n;
	for(i=0;i<10;i++){
		printf("%d\n",a[i]);
	}
	return 0;
} 
