/*�㷨�ʼ�2.5��������
����

��Ŀ����

��һ�е��ģ��Ѱ����¹���������룺

A-->Z        a-->z

B-->Y        b-->y

C-->X        c-->x

......          ......

����һ����ĸ��ɵ�26����ĸ����i����ĸ��ɵڣ�26-i+1)����ĸ������ĸ�ַ����䡣Ҫ������������ԭ�ģ��������
����
����һ������
���
���ܺ��ԭ�ģ�����ռһ�С�
��������

ZYX123zyx

�������

ABC123abc 

*/


#include <stdio.h>

 
int main(){
	char ch;
	ch=getchar();
	while(ch!='\n'){
		if(ch>='A'&&ch<='Z'){
			printf("%c",'A'+'Z'-ch);
		}
		else if(ch>='a'&&ch<='z'){
			printf("%c",'a'+'z'-ch);
		}
		else {
			printf("%c",ch);
		}
		ch=getchar();
	}
	return 0;
}
