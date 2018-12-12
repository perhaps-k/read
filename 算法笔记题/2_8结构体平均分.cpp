/*2_8 结构体 平均分
题目描述

有10个学生，每个学生的数据包括学号、姓名、3门课程的成绩。读入这10个学生的数据，要求输出3门课程的总平均成绩，以及个人平均分最高的学生的数据（包括学号、姓名、3门课程成绩、平均分数）。
输入

共有10行，每行包含了一个学生的学号（整数）、名字（长度不超过19的无空格字符串）和3门课程的成绩（0至100之间的整数），用空格隔开。
输出

第一行包含了3个实数，分别表示3门课程的总平均成绩，保留2位小数，每个数之后输出一个空格。
第二行输出个人平均分最高的学生的数据，与输入数据格式相同。如果有多位个人平均分最高的学生，输出按照输入顺序第一个最高分的学生数据。
请注意行尾输出换行。
样例输入

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

样例输出

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
