/*�㷨�ʼ�2.6
�ַ���������

��Ŀ����
дһ��������һ���ַ����������š���������������һ���ַ�����ͨ�����øú������õ����ַ����������ź���ַ������������
����
һ���ַ�����
���
�����ַ��������ź���ַ���������ռһ�С�
��������

abcd

�������

dcba

*/ 

#include<stdio.h>
#include <string.h>

void reversed(char a[],int n){
	int i,temp;
	for(i=0;i<n/2;i++){
		temp=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=temp;
	}
} 


int main(){
	char a[100];
	gets(a);
	reversed(a,strlen(a));
	puts(a);
	return 0;
}
