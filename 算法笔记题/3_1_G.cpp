/*3_1 数字分类 (20)
题目描述

给定一系列正整数，请按要求对数字进行分类，并输出以下5个数字：
A1 = 能被5整除的数字中所有偶数的和；
A2 = 将被5除后余1的数字按给出顺序进行交错求和，即计算n1-n2+n3-n4...；
A3 = 被5除后余2的数字的个数；
A4 = 被5除后余3的数字的平均数，精确到小数点后1位；
A5 = 被5除后余4的数字中最大数字。
输入
每个输入包含1个测试用例。每个测试用例先给出一个不超过1000的正整数N，随后给出N个不超过1000的待分类的正整数。数字间以空格分隔。
输出

对给定的N个正整数，按题目要求计算A1~A5并在一行中顺序输出。数字间以空格分隔，但行末不得有多余空格。

若其中某一类数字不存在，则在相应位置输出“N”。
样例输入

13 1 2 3 4 5 6 7 8 9 10 20 16 18
8 1 2 4 5 6 7 9 16

样例输出

30 11 2 9.7 9
N 11 2 N 9
*/

/*
思路：a2需要设置一个变量来标识是否有被5除余1的数，因为交错相加有可能和为0 
*/

#include<stdio.h>
#include<math.h>

int main(){
	int n,i,num[1000]={},a1,a2,a2c,a3,a4,a5,a4c,sign;
	while(scanf("%d",&n)!=EOF){
		for(i=0;i<n;i++){
			scanf("%d",&num[i]);
		}
		a1=a2=a3=a4=a5=0;
		a4c=a2c=0;
		sign=1;
		for(i=0;i<n;i++){
			if(num[i]%5==0){
				if(num[i]%2==0){
					a1+=num[i];	
				}
			}
			if(num[i]%5==1){
				a2+=(sign*num[i]);
				sign=-sign;
				a2c++;
			}
			if(num[i]%5==2){
				a3++;
			}
			if(num[i]%5==3){
				a4+=num[i];
				a4c++;
			}
			if(num[i]%5==4){
				if(num[i]>a5){
					a5=num[i];
				}
			}
		}
		
		
		if(a1)
			printf("%d ",a1);
		else
			printf("N ");
		if(a2c)
			printf("%d ",a2);
		else
			printf("N ");
		if(a3)
			printf("%d ",a3);
		else
			printf("N ");
		if(a4)
			printf("%.1f ",(float)a4/a4c);
		else
			printf("N ");
		if(a5)
			printf("%d",a5);
		else
			printf("N");
	}
	return 0;
}
	
	
