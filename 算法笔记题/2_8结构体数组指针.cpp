/*2_8 �ṹ�� �ṹ������ָ��
��Ŀ����

����һ���ṹ��student���洢ѧ����ѧ�š����֡��Ա�����䣬����ÿ��ѧ����������Ϣ�������ڽṹ���У���������ṹ��student�Ķ������£�
struct student {
    int num;
    char name[20];
    char sex;
    int age;
};
����Ҫ��ʹ��ָ��ṹ�������ָ���������������
����

��һ����һ������n����ʾ������n��ѧ������Ϣ�������롣��֤n������20��
�Ժ��n���У�ÿһ�а�����Ӧѧ����ѧ�š����֡��Ա�����䣬�ÿո��������֤ÿһ���������������ո��ҳ��Ȳ�����15���Ա���M��F�����ַ�����ʾ��
���

��n�У�ÿ�����һ��ѧ����ѧ�š����֡��Ա�����䣬�ÿո������
��ע����β������С�
��������

3
10101 LiLin M 18
10102 ZhangFun M 19
10104 WangMin F 20

�������

10101 LiLin M 18
10102 ZhangFun M 19
10104 WangMin F 20

*/

#include<stdio.h>

int main(){
	struct student{
	int num;
	char name[20];
	char sex;
	int age;
	}stu[20],*p;
	int n,i;
	p=stu;
	
	scanf("%d",&n);
	getchar();
	
	for(i=0;i<n;i++,p++){
		scanf("%d %s %c %d",&(p->num),p->name,&(p->sex),&(p->age));
	}
	p=p-n;
	for(i=0;i<n;i++,p++){
		printf("%d %s %c %d\n",p->num,p->name,p->sex,p->age);
	}
	
	return 0;
}
