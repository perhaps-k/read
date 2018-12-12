/*2_8 结构体 结构体+共同体
题目描述

设有若干个人员的数据，其中包含学生和教师。学生的数据中包括：号码、姓名、性别、职业、班级。教师的数据包括：号码、姓名、性别、职业、职务。可以看出，学生和教师所包含的数据是不同的。现在要求把这些数据放在同一个表格中储存，使用结构体中的共用体实现。结构体定义如下：
struct {
    int num;
    char name[10];
    char sex;
    char job;
    union {
        int class;
        char position[10];
    }category;
};
在以上的结构体中，如果job项为s（学生），则第5项为class（班级）；如果job项是t（教师），则第5项为position（职务）。
输入几个人员的数据，将其保存在以上包含共用体的结构体数组中，并输出。
输入

第一行有一个整数n，表示以下n行分别表示n个人员的数据。保证n不超过100。
之后的n行，每行有5项用空格隔开的内容。前4项分别为人员的号码（整数）、姓名（长度不超过9的无空格字符串）、性别（字符，m或f）和职业（字符，s或t）。如果第4项是s，则第5项为一个整数，表示班级；如果第4项是t，则第5项为一个长度不超过9的无空格字符串，表示职务。
输出

共有n行，与输入格式相同，输出读入的所有内容。
请注意行尾输出换行。
样例输入

2
101 Li f s 501
102 Wang m t prof

样例输出

101 Li f s 501
102 Wang m t prof
 
*/

#include<stdio.h>
#include<string.h>

struct person{
	int num;
	char name[10];
	char sex;
	char job;
	union {
		int clas;//class是标识符 
		char position[10];
	}category;
	};


int main(){
	person per[100];
	int n,i;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d %s %c",&per[i].num,per[i].name,&per[i].sex);
		getchar();
		scanf("%c",&per[i].job);
		getchar();
		if(per[i].job=='s'){
			scanf("%d",&per[i].category.clas);
		}
		else{
			scanf("%s",per[i].category.position);
		}
	}
	for(i=0;i<n;i++){
		printf("%d %s %c %c ",per[i].num,per[i].name,per[i].sex,per[i].job);
		if(per[i].job=='s'){
			printf("%d\n",per[i].category.clas);
		}
		else{
			printf("%s\n",per[i].category.position);
		}
	}
	return 0;
} 

 

