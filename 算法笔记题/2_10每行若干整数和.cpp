/*2_10 A+B ���������ϰIV
��Ŀ����

��������Ǽ������������ĺ͡�
����

ÿ�еĵ�һ����N����ʾ���к�����N������

���N=0ʱ����ʾ�������������һ�в�Ҫ���㡣
���

����ÿһ��������Ҫ����Ӧ��������͡�
��������

4 1 2 3 4
5 1 2 3 4 5
0 

�������

10
15

*/ 

#include<stdio.h>

int main(){
	int n,sum,num;
	sum=0;
	while(1){
		scanf("%d",&n);
		if(n){
			while(n--){
			scanf("%d",&num);
			sum+=num;
			}    
			printf("%d\n",sum); 
			sum=0; 	
		}
		else
			break;
	}                                   	
	return 0;
}
