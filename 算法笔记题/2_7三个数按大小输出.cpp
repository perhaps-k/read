/*2_7 ָ��
����������С��� 

��Ŀ����

����a��b��c�������������ȴ��С��˳�����a��b��c��ע����ʹ��ָ������ķ�ʽ���бȽϺ������
����

�����ÿո����������a��b��c��
���

���ȴ��С��˳�����a��b��c���ÿո������
��ע����β������С�
��������

9 0 10

�������

10 9 0
*/
#include<stdio.h>

int main(){
	int a,b,c;
	int *i,*j,*k;
	i=&a;
	j=&b;
	k=&c;
	scanf("%d %d %d",&a,&b,&c);
	if(*i>*j){
		if(*k>*i)
			printf("%d %d %d\n",*k,*i,*j);
		else if(*k<*j)
			printf("%d %d %d\n",*i,*j,*k);
		else
			printf("%d %d %d\n",*i,*k,*j);
	}
	else{
		if(*k<*i)
			printf("%d %d %d\n",*j,*i,*k);
		else if(*k>*j)
			printf("%d %d %d\n",*k,*j,*i);
		else
			printf("%d %d %d\n",*j,*k,*i);
	}
	return 0;
}
