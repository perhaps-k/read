/*2_8 �ṹ�� ��Ʊ

��Ŀ����

���һ���Ժ�ѡ�˵�Ʊ��ͳ�Ƴ��򡣼�����3����ѡ�ˣ����ֱַ�ΪLi��Zhang��Fun��ʹ�ýṹ��洢ÿһ����ѡ�˵����ֺ͵�Ʊ������¼ÿһ��ѡƱ�ĵ�Ʊ���������ÿ����ѡ�����յĵ�Ʊ�����ṹ����Զ�������µĸ�ʽ��
struct person {
    char name[20];
    int count;
}leader[3] = {��Li��, 0, ��Zhang��, 0, ��Fun��, 0};
����

��һ����һ������n����ʾ������n��ѡƱ��Ϣ�������롣��֤n������100��
�Ժ��n���У�ÿһ�а���һ��������ΪѡƱ�ĵ�Ʊ�ˡ���֤ÿһ����������Li��Zhang��Fun�е�ĳһ����
���

�����У��ֱ�ΪLi��Zhang��Funÿ�˵ĵ�Ʊ������ʽΪ�������������������һ��ð�ţ���������ѡ�˵ĵ�Ʊ����
��ע����β������С�
��������

10
Li
Li
Fun
Zhang
Zhang
Fun
Li
Fun
Zhang
Li

�������

Li:4
Zhang:3
Fun:3

*/


#include<stdio.h>
#include<string.h>

struct person{
	char name[20];
	int count;
}leader[3]={"Li",0,"Zhang",0,"Fun",0};

int main(){
	int n,i;
	char na[6];
	
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++){
		gets(na);
		if(na[0]=='L'){
			leader[0].count++;
		}
		else if(na[0]=='Z'){
			leader[1].count++;
		}
		else{
			leader[2].count++;
		}
	}
	printf("Li:%d\nZhang:%d\nFun:%d\n",leader[0].count,leader[1].count,leader[2].count);
	return 0;
}
