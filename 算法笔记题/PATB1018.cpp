/*���Ӽ����� (20)
��Ŀ����
���Ӧ�ö����桰���Ӽ�����������Ϸ������ͬʱ�������ƣ�ʤ��������ͼ��ʾ��
�ָ������˵Ľ����¼����ͳ��˫����ʤ��ƽ�������������Ҹ���˫���ֱ��ʲô���Ƶ�ʤ�����

����
�����1�и���������N��<=105������˫������Ĵ��������N�У�ÿ�и���һ�ν������Ϣ�����ס���˫��ͬʱ�����ĵ����ơ�C�������ӡ���J������������B������������1����ĸ����׷�����2�������ҷ����м���1���ո�
���
�����1��2�зֱ�����ס��ҵ�ʤ��ƽ�������������ּ���1���ո�ָ�����3�и���������ĸ���ֱ����ס��һ�ʤ�����������ƣ��м���1���ո�����ⲻΨһ�����������ĸ����С�Ľ⡣
��������

10
C J
J B
C B
B B
B C
C C
C B
J B
B C
J J

�������

5 3 2
2 3 5
B B
*/

/*
˼·��������ĸ���������鱣��ÿ������Ӯ�ô�����
max��count�����Ǽ��ҹ��õģ������ù�һ��֮����Ҫ���㴦�������ܳ��ִ��� 
*/ 

#include<stdio.h>

int main(){
	int n,i;
	int js,jf,p;
	int jt[3]={0},yt[3]={0};
	char j,y;
	int max=0,count=0;
	
	js=jf=p=0;
	scanf("%d",&n);
	getchar();
	while(n--){
		scanf("%c %c",&j,&y);
		getchar();
		if(j=='B'){
			if(y=='B'){
				p++;
			}
			else if(y=='C'){
				js++;
				jt[0]++;
			}
			else{
				jf++;
				yt[2]++;
			}
		}
		else if(j=='C'){
			if(y=='B'){
				jf++;
				yt[0]++;
			}
			else if(y=='C'){
				p++;
			}
			else{
				js++;
				jt[1]++;
			}
		}
		else{
			if(y=='B'){
				js++;
				jt[2]++;
			}
			else if(y=='C'){
				jf++;
				yt[1]++;
			}
			else{
				p++;
			}
		}
	}
	printf("%d %d %d\n%d %d %d\n",js,p,jf,jf,p,js);
	for(i=0;i<3;i++){
		if(jt[i]>max){
			count=i;
			max=jt[i];
		}
	}
	switch (count){
		case 0:
				printf("B ");
				break;
		case 1:
				printf("C ");
				break;
		case 2:
				printf("J ");
				break;
	}
	max=0;
	count=0;
	for(i=0;i<3;i++){
		if(yt[i]>max){
			count=i;
			max=yt[i];
		}
	}
	switch (count){
		case 0:
				printf("B");
				break;
		case 1:
				printf("C");
				break;
		case 2:
				printf("J");
				break;
	}

	return 0;
}
