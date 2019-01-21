/*PATA1002 A+B for Polynomials (25)

题目描述
This time, you are supposed to find A+B where A and B are two polynomials.

输入描述:
Each input file contains one test case. Each case occupies 2 lines, and each line contains the information of a polynomial:
K N1 aN1 N2 aN2 ... NK aNK, where K is the number of nonzero terms in the polynomial, Ni and aNi (i=1, 2, ..., K) are the exponents and coefficients, respectively.  It is given that 1 <= K <= 10，0 <= NK < ... < N2 < N1 <=1000.

输出描述:
For each test case you should output the sum of A and B in one line, with the same format as the input.  Notice that there must be NO extra space at the end of each line.  Please be accurate to 1 decimal place.

输入例子:
2 1 2.4 0 3.2
2 2 1.5 1 0.5

输出例子:
3 2 1.5 1 2.9 0 3.2
*/

/*
思路：用一个double数组存放多项式系数，数组下标即为幂次。
注意输出时需要先输出不为0的项的数目，需要统计计算后不为0的项，计算后有可能系数由不为0变成0，所以可以在计算完后再每一项检测是否为零来统计数目。
double型输入时输入格式为%lf。 
*/

#include<stdio.h>

int main(){
	double temp[1001]={0.0},coe;//temp数组存放多项式的系数，第i项即幂次为i的系数，coe是系数 
	int count=0,exp,k,i;//exp为幂次
	
	scanf("%d",&k);
	while(k--){
		scanf("%d%lf",&exp,&coe);
		temp[exp]=coe;
	}
	scanf("%d",&k);
	while(k--){
		scanf("%d%lf",&exp,&coe);
		temp[exp]+=coe;
	}
	for(i=0;i<1001;i++){
		if(temp[i]!=0)
			count++;
	}
	printf("%d",count);
	i=1000;
	while(count--){
		while(temp[i]==0){
			i--;
		}
		printf(" %d %.1f",i,temp[i]);
		if(count==0)
			printf("\n");
		i--;	
	}
	return 0;
}
