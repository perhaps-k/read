/*3_1 特殊乘法 
题目描述
写个算法，对2个小于1000000000的输入，求结果。特殊乘法举例：123 * 45 = 1*4 +1*5 +2*4 +2*5 +3*4+3*5
输入

 两个小于1000000000的数
输出

 输入可能有多组数据，对于每一组数据，输出Input中的两个数按照题目要求的方法进行运算后得到的结果。
样例输入

24 65
42 66666
3 67

样例输出

66
180
39

*/
/*
思路解析：
输入的两个数的每一位都要与另一个数的每一位相乘，求每位相乘最终的和。
把第一个数的某一位提取出来，与另一个数的每一位相乘再相加，注意第二个数在每次第一个数取出一位时都需要重新拆位。
由于有多组输入，每位相乘再相加的和在输入新的一组数后需要清零重新开始计算。 

*/

#include<stdio.h>

int main(){
	int a,b,multiply,remainder1,remainder2,k;
	
	while(scanf("%d%d",&a,&b)!=EOF){
		remainder1=a;
		remainder2=k=b;
		multiply=0;
		while((a%10)!=0&&a){
			remainder1=a%10;
			k=b;
			while((k%10)!=0&&k){
				remainder2=k%10;
				multiply+=(remainder1*remainder2);
				k/=10;
			}
			a/=10;
		}
		printf("%d\n",multiply);
	}
	return 0;
}
