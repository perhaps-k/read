/*2-10 A+B ���������ϰVI
��Ŀ����

��������Ǽ������������ĺ͡�
����

ÿ�еĵ�һ����N����ʾ���к�����N������
���

����ÿһ��������Ҫ����Ӧ��������͡�
��������

4 1 2 3 4
5 1 2 3 4 5

�������

10
15
*/

#include<stdio.h>

int main(){
	int n,num,sum;
	while(scanf("%d",&n)!=EOF){
		sum=0;
		while(n--){
			scanf("%d",&num);
			sum+=num;
		}
		printf("%d\n",sum);
	}
	return 0;
}
