/*3_1 比较奇偶数个数
题目描述

第一行输入一个数，为n，第二行输入n个数，这n个数中，如果偶数比奇数多，输出NO，否则输出YES。
输入


输入有多组数据。
每组输入n，然后输入n个整数（1<=n<=1000）。


输出


如果偶数比奇数多，输出NO，否则输出YES。


样例输入

1
67 
7
0 69 24 78 58 62 64 

样例输出

YES
NO

*/

#include<stdio.h>

int main(){
	int odd,even,n,num;
	
	while(scanf("%d",&n)!=EOF){
		odd=0;
		even=0;
		while(n--){
			scanf("%d",&num);
			if(num%2==0)
				even++;
			else
				odd++;
		}
		if(odd>even)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}

