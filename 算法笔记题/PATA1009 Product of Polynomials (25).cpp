/* PATA1009 Product of Polynomials (25)

题目描述
This time, you are supposed to find A*B where A and B are two polynomials.

输入描述:
Each input file contains one test case. Each case occupies 2 lines, and each line contains the information of a polynomial:
K N1 aN1 N2 aN2 ... NK aNK, where K is the number of nonzero terms in the polynomial, Ni and aNi (i=1, 2, ..., K) are the exponents and coefficients, respectively.  It is given that 1 <= K <= 10, 0 <= NK < ... < N2 < N1 <=1000.

输出描述:
For each test case you should output the product of A and B in one line, with the same format as the input.  Notice that there must be NO extra space at the end of each line.  Please be accurate up to 1 decimal place.

输入例子:
2 1 2.4 0 3.2
2 2 1.5 1 0.5

输出例子:
3 3 3.6 2 6.0 1 1.6
*/
/*
思路：最开始想的是将两个多项式的系数存在两个数组中，然后用一个数组中的非零元素去与另一个数组中的所有非零元素相乘，计算结果保存在数组c中。
后来看题解，提供了一个思路是第二个多项式可以边输入变计算，即只需要把第二个多项式中每次输入的项与第一个数组中的每一个非零元素相乘再与数组c中的系数相加即可。 
一开始只检验计算后的系数是否为0，提交了几次发现有一个测试数据中我跑出来的系数近似后是0.0的也显示出来了，所以用了一个极小数eps来修正误差。
*/

#include<stdio.h>
#include<math.h>
const double eps=1e-8;
#define Equ(a,b) (fabs((a)-(b))<(eps))

int main(){
	double a[1001]={0.0},c[2001]={0.0};
	int k,exp,cexp,i,ccount=0;
	double coe,ccoe;
	
	scanf("%d",&k);
	while(k--){
		scanf("%d%lf",&exp,&coe);
		a[exp]=coe;
	}
	scanf("%d",&k);
	while(k--){
			scanf("%d%lf",&exp,&coe);
			for(i=0;i<1001;i++){
				while(!a[i])
					i++;
				cexp=exp;
				ccoe=coe;
				cexp+=i;
				ccoe*=a[i];
				c[cexp]+=ccoe;	
			}
	}	
	
	for(i=0;i<2001;i++){
		if(!Equ(c[i],0.0))
			ccount++;
	}
	printf("%d",ccount);
	for(i=2000;i>=0;i--){
		if(!Equ(c[i],0.0))
			printf(" %d %.1f",i,c[i]);
	}
	return 0;
}
