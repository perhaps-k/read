/*3_1 hortest Distance  
��Ŀ����
The task is really simple: given N exits on a highway which forms a simple cycle, you are supposed to tell the shortest distance between any pair of exits.
����
Each input file contains one test case. For each case, the first line contains an integer N (in [3, 105]), followed by N integer distances D1 D2 ... DN, where Di is the distance between the i-th and the (i+1)-st exits, and DN is between the N-th and the 1st exits. All the numbers in a line are separated by a space. The second line gives a positive integer M (<=104), with M lines follow, each contains a pair of exit numbers, provided that the exits are numbered from 1 to N. It is guaranteed that the total round trip distance is no more than 107.
���
For each test case, print your results in M lines, each contains the shortest distance between the corresponding given pair of exits.
��������

5 1 2 4 14 9
3
1 3
2 5
4 1

�������

3
10
7
*/

/*
˼·����һ������ѭ��˫����������ƣ�����֪�Ƿ��ǿ��ڵ�Ĳ����������������ύoj�ǳ�ʱ�ģ����н��ûʲô���⡣ 
֮��������ķ�ʽ���������д��ÿ���㵽��һ����֮��ľ��� 
*/ 

#include<stdio.h>

int main(){
	int dist[100000]={0};
	int n,m,i,node1,node2,leftdist,rightdist;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&dist[i]);
	}
	scanf("%d",&m);
	while(m--){
		scanf("%d%d",&node1,&node2);
		leftdist=0;
		rightdist=0;
		
		if(node2>node1){
			for(i=node1-1;i<node2-1;i++){
				rightdist+=dist[i];
			}
			for(i=node1-2;i>=0;i--){
				leftdist+=dist[i];
			}
			for(i=node2-1;i<n;i++){
				leftdist+=dist[i];
			}
		}
		else{
			for(i=node1-1;i<n;i++){
				rightdist+=dist[i];
			}
			for(i=0;i<node2-1;i++){
				rightdist+=dist[i];
			}
			for(i=node1-2;i>=node2-1;i--){
				leftdist+=dist[i];
			}
		}
		printf("%d\n",leftdist>rightdist?rightdist:leftdist);	
	}
	return 0;
}


