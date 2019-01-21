/*PATA1002 A+B for Polynomials (25)

��Ŀ����
This time, you are supposed to find A+B where A and B are two polynomials.

��������:
Each input file contains one test case. Each case occupies 2 lines, and each line contains the information of a polynomial:
K N1 aN1 N2 aN2 ... NK aNK, where K is the number of nonzero terms in the polynomial, Ni and aNi (i=1, 2, ..., K) are the exponents and coefficients, respectively.  It is given that 1 <= K <= 10��0 <= NK < ... < N2 < N1 <=1000.

�������:
For each test case you should output the sum of A and B in one line, with the same format as the input.  Notice that there must be NO extra space at the end of each line.  Please be accurate to 1 decimal place.

��������:
2 1 2.4 0 3.2
2 2 1.5 1 0.5

�������:
3 2 1.5 1 2.9 0 3.2
*/

/*
˼·����һ��double�����Ŷ���ʽϵ���������±꼴Ϊ�ݴΡ�
ע�����ʱ��Ҫ�������Ϊ0�������Ŀ����Ҫͳ�Ƽ����Ϊ0���������п���ϵ���ɲ�Ϊ0���0�����Կ����ڼ��������ÿһ�����Ƿ�Ϊ����ͳ����Ŀ��
double������ʱ�����ʽΪ%lf�� 
*/

#include<stdio.h>

int main(){
	double temp[1001]={0.0},coe;//temp�����Ŷ���ʽ��ϵ������i��ݴ�Ϊi��ϵ����coe��ϵ�� 
	int count=0,exp,k,i;//expΪ�ݴ�
	
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
