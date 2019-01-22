/* PATA1009 Product of Polynomials (25)

��Ŀ����
This time, you are supposed to find A*B where A and B are two polynomials.

��������:
Each input file contains one test case. Each case occupies 2 lines, and each line contains the information of a polynomial:
K N1 aN1 N2 aN2 ... NK aNK, where K is the number of nonzero terms in the polynomial, Ni and aNi (i=1, 2, ..., K) are the exponents and coefficients, respectively.  It is given that 1 <= K <= 10, 0 <= NK < ... < N2 < N1 <=1000.

�������:
For each test case you should output the product of A and B in one line, with the same format as the input.  Notice that there must be NO extra space at the end of each line.  Please be accurate up to 1 decimal place.

��������:
2 1 2.4 0 3.2
2 2 1.5 1 0.5

�������:
3 3 3.6 2 6.0 1 1.6
*/
/*
˼·���ʼ����ǽ���������ʽ��ϵ���������������У�Ȼ����һ�������еķ���Ԫ��ȥ����һ�������е����з���Ԫ����ˣ�����������������c�С�
��������⣬�ṩ��һ��˼·�ǵڶ�������ʽ���Ա��������㣬��ֻ��Ҫ�ѵڶ�������ʽ��ÿ������������һ�������е�ÿһ������Ԫ�������������c�е�ϵ����Ӽ��ɡ� 
һ��ʼֻ���������ϵ���Ƿ�Ϊ0���ύ�˼��η�����һ���������������ܳ�����ϵ�����ƺ���0.0��Ҳ��ʾ�����ˣ���������һ����С��eps��������
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
