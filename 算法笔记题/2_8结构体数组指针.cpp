/*2_8 结构体 结构体数组指针
题目描述

定义一个结构体student，存储学生的学号、名字、性别和年龄，读入每个学生的所有信息，保存在结构体中，并输出。结构体student的定义如下：
struct student {
    int num;
    char name[20];
    char sex;
    int age;
};
本题要求使用指向结构体数组的指针进行输入和输出。
输入

第一行有一个整数n，表示以下有n个学生的信息将会输入。保证n不大于20。
以后的n行中，每一行包含对应学生的学号、名字、性别和年龄，用空格隔开。保证每一个人名都不包含空格且长度不超过15，性别用M和F两个字符来表示。
输出

有n行，每行输出一个学生的学号、名字、性别和年龄，用空格隔开。
请注意行尾输出换行。
样例输入

3
10101 LiLin M 18
10102 ZhangFun M 19
10104 WangMin F 20

样例输出

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
