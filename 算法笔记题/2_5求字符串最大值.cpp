/*�㷨�ʼ�2.5
���ַ������ֵ 

��Ŀ����
�Ӽ���������3���ַ����������������ߡ�
����

����3�У�ÿ�о�Ϊһ���ַ�����
���
һ�У����������ַ���������ߡ�
��������

England
China
America

�������

England
*/

#include<stdio.h>

int main(){
	char str1[100],str2[100],str3[100];
	int i=0;
	gets(str1);
	gets(str2);
	gets(str3);
	
	while(str1[i]==str2[i]&&str2[i]==str3[i])
	{
		i++;
	}
	if(str1[i]>str2[i]){
		if(str1[i]>str3[i])
			puts(str1);
	}
	else if(str1[i]<str2[i]){
		if(str2[i]>str3[i])
			puts(str2);
	}
	else{
		if(str1[i]<str3[i])
			puts(str3);
	}
	
	return 0;
}
