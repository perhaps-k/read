/*2_8 �ṹ�� ƽ����
��Ŀ����

��10��ѧ����ÿ��ѧ�������ݰ���ѧ�š�������3�ſγ̵ĳɼ���������10��ѧ�������ݣ�Ҫ�����3�ſγ̵���ƽ���ɼ����Լ�����ƽ������ߵ�ѧ�������ݣ�����ѧ�š�������3�ſγ̳ɼ���ƽ����������
����

����10�У�ÿ�а�����һ��ѧ����ѧ�ţ������������֣����Ȳ�����19���޿ո��ַ�������3�ſγ̵ĳɼ���0��100֮������������ÿո������
���

��һ�а�����3��ʵ�����ֱ��ʾ3�ſγ̵���ƽ���ɼ�������2λС����ÿ����֮�����һ���ո�
�ڶ����������ƽ������ߵ�ѧ�������ݣ����������ݸ�ʽ��ͬ������ж�λ����ƽ������ߵ�ѧ���������������˳���һ����߷ֵ�ѧ�����ݡ�
��ע����β������С�
��������

101 AAA 80 81 82
102 BBB 83 84 85
103 CCC 86 87 88
104 DDD 89 90 91
105 EEE 92 93 94
106 FFF 80 90 100
107 GGG 85 90 95
108 HHH 80 85 90
109 III 90 91 92
110 JJJ 91 88 87

�������

85.60 87.90 90.40 
105 EEE 92 93 94
 
*/

#include<stdio.h>
//#include<string.h>

struct student{
	int id;
	int name[20];
	int score[3];
}stu[10];

void input(){
	int i;
	for(i=0;i<10;i++){
		scanf("%d %s %d %d %d",&stu[i].id,stu[i].name,&stu[i].score[0],&stu[i].score[1],&stu[i].score[2]);
	}
}

void print(){
	int i,j,sum,maxn;
	float aver,max;
	aver=0;
	max=0;
	maxn=0;
	for(i=0;i<3;i++){
		sum=0;
		for(j=0;j<10;j++){
			sum+=stu[j].score[i];
		}
		aver=sum/10.0;
		printf("%.2f ",aver);
	}
	printf("\n");
	
	for(i=0;i<10;i++){
		sum=0;
		for(j=0;j<3;j++){
			sum+=stu[i].score[j];
		}
		aver=sum/3.0;
		if(aver>max){
			maxn=i;
			max=aver;
		}
	}
	printf("%d %s %d %d %d\n",stu[maxn].id,stu[maxn].name,stu[maxn].score[0],stu[maxn].score[1],stu[maxn].score[2]);
	
}

int main(){
	input();
	print();
	return 0;
}
