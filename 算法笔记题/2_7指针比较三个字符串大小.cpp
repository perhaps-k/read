/*2_7 ָ�� ָ��Ƚ������ַ�����С 
��Ŀ����

����3���ַ���������С�����˳�������Ҫ��ʹ��ָ��ķ������д���
����

3�У�ÿ��һ�����ַ�������֤ÿ���ַ����ĳ��Ȳ�����20��
���

����С�����˳�������3���ַ�����ÿ���ַ���һ�С�
��ע����β������С�
��������

China
CLOCK
deal

�������

CLOCK
China
deal

*/ 


#include<stdio.h>
#include <string.h>

void comp_3(char* &i, char* &j,char* &k){
	if(strcmp(i,j)>0&&strcmp(i,k)>0){
		if(strcmp(j,k)>0){
			puts(k);
			puts(j);
			puts(i);
		}
		else{
			puts(j);
			puts(k);
			puts(i);
		}
	}
	else if(strcmp(j,i)>0&&strcmp(j,k)>0){
		if(strcmp(i,k)>0){
			puts(k);
			puts(i);
			puts(j);
		}
		else{
			puts(i);
			puts(k);
			puts(j);
		}
	}
	else{
		if(strcmp(i,j)>0){
			puts(j);
			puts(i);
			puts(k);
		}
		else{
			puts(i);
			puts(j);
			puts(k);
		}
	}
}

int main (){
	char a[30],b[30],c[30];
	char *p,*q,*r;
	//int count=0;
	
	p=a;
	q=b;
	r=c;
	
	scanf("%s",a);
	scanf("%s",b);
	scanf("%s",c);
	
	comp_3(p,q,r);
	
	return 0;
}
