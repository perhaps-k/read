/*3_1 A+B
��Ŀ����

������������A��B�����ʾ��ʽ�ǣ��Ӹ�λ��ʼ��ÿ��λ���ö���","������
���������A+B�Ľ��������������ʽ�����
����

������������������ݣ�ÿ������ռһ�У�����������A��B��ɣ�-10^9 < A,B < 10^9����
���

�����A+B�Ľ��������������ʽ�����ÿ������ռһ�С�
��������

-234,567,890 123,456,789
1,234 2,345,678

�������

-111111101
2346912
*/

/*
����˼·��
�����м���ж�����Ϊ�ָ���������ֱ�Ӵ�Ϊ�������ͣ���Ҫ�ȴ�Ϊ�ַ����ͣ���ͨ��ȥ�����Ž�������ת���� 
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
			number=number*10+((int)num[i]-48);//�ַ���ǿ��ת����int�ͣ���ת�����ַ���ASCII�룬0��ASCII��Ϊ48 
		i++;
	}
	number=sign*number;
	return number;
}
