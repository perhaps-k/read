/*2_8 �ṹ�� �ṹ��+��ͬ��
��Ŀ����

�������ɸ���Ա�����ݣ����а���ѧ���ͽ�ʦ��ѧ���������а��������롢�������Ա�ְҵ���༶����ʦ�����ݰ��������롢�������Ա�ְҵ��ְ�񡣿��Կ�����ѧ���ͽ�ʦ�������������ǲ�ͬ�ġ�����Ҫ�����Щ���ݷ���ͬһ������д��棬ʹ�ýṹ���еĹ�����ʵ�֡��ṹ�嶨�����£�
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
�����ϵĽṹ���У����job��Ϊs��ѧ���������5��Ϊclass���༶�������job����t����ʦ�������5��Ϊposition��ְ�񣩡�
���뼸����Ա�����ݣ����䱣�������ϰ���������Ľṹ�������У��������
����

��һ����һ������n����ʾ����n�зֱ��ʾn����Ա�����ݡ���֤n������100��
֮���n�У�ÿ����5���ÿո���������ݡ�ǰ4��ֱ�Ϊ��Ա�ĺ��루�����������������Ȳ�����9���޿ո��ַ��������Ա��ַ���m��f����ְҵ���ַ���s��t���������4����s�����5��Ϊһ����������ʾ�༶�������4����t�����5��Ϊһ�����Ȳ�����9���޿ո��ַ�������ʾְ��
���

����n�У��������ʽ��ͬ�����������������ݡ�
��ע����β������С�
��������

2
101 Li f s 501
102 Wang m t prof

�������

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
		int clas;//class�Ǳ�ʶ�� 
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

 

