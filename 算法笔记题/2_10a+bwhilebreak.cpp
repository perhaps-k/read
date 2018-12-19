/*2_10 A+B 输入输出练习III
题目描述

你的任务是计算a+b。
输入

输入中每行是一对a和b。其中会有一对是0和0标志着输入结束，且这一对不要计算。
输出
对于输入的每对a和b，你需要在相应的行输出a、b的和。
如第二对a和b，他们的和也输出在第二行。
样例输入

1 5
10 20
0 0

样例输出

6
30
*/

//#include<stdio.h>
//
//int main(){
//	int a,b;
//		while(scanf("%d %d",&a,&b)!=EOF){
//			if(!(a||b))
//				break;
//			else
//			printf("%d\n",a+b);
//		}                                                             	
//	return 0;
//}

#include<stdio.h>

int main(){
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF,a||b){
		printf("%d\n",a+b);
	}
	return 0;
}



