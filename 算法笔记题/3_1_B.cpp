/*3_1 A+B
题目描述

给定两个整数A和B，其表示形式是：从个位开始，每三位数用逗号","隔开。
现在请计算A+B的结果，并以正常形式输出。
输入

输入包含多组数据数据，每组数据占一行，由两个整数A和B组成（-10^9 < A,B < 10^9）。
输出

请计算A+B的结果，并以正常形式输出，每组数据占一行。
样例输入

-234,567,890 123,456,789
1,234 2,345,678

样例输出

-111111101
2346912
*/

/*
解题思路：
数字中间带有逗号作为分隔符，不能直接存为整数类型，需要先存为字符类型，再通过去掉逗号进行类型转换。 
*/ 


#include<stdio.h>

int char2int(char num[]);

int main(){
	int a,b;
	char num1[15],num2[15];
	
	a=b=0;
	
	while(scanf("%s%s",num1,num2)!=EOF){
		a=char2int(num1);
		b=char2int(num2);
		printf("%d\n",a+b);
	}
	return 0;
}

int char2int(char num[]){
	int number=0,sign,i=0;
	if(num[0]=='-'){
		sign=-1;
		i++;
	}
	else
		sign=1;
	while(num[i]!='\0'){
		if(num[i]>='0'&&num[i]<='9')
			number=number*10+((int)num[i]-48);//字符型强制转换成int型，是转换成字符的ASCII码，0的ASCII码为48 
		i++;
	}
	number=sign*number;
	return number;
}
