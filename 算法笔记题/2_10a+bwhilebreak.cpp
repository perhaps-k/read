/*2_10 A+B ���������ϰIII
��Ŀ����

��������Ǽ���a+b��
����

������ÿ����һ��a��b�����л���һ����0��0��־���������������һ�Բ�Ҫ���㡣
���
���������ÿ��a��b������Ҫ����Ӧ�������a��b�ĺ͡�
��ڶ���a��b�����ǵĺ�Ҳ����ڵڶ��С�
��������

1 5
10 20
0 0

�������

6
30
*/

//#include<stdio.h>
//
//int main(){
//	int a,b;
//		while(scanf("%d %d",&a,&b)!=EOF){
//			if(!(a||b))
//				break;
//			else
//			printf("%d\n",a+b);
//		}                                                             	
//	return 0;
//}

#include<stdio.h>

int main(){
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF,a||b){
		printf("%d\n",a+b);
	}
	return 0;
}



