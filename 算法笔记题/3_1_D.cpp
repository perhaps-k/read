/*3_1 �Ƚ���ż������
��Ŀ����

��һ������һ������Ϊn���ڶ�������n��������n�����У����ż���������࣬���NO���������YES��
����


�����ж������ݡ�
ÿ������n��Ȼ������n��������1<=n<=1000����


���


���ż���������࣬���NO���������YES��


��������

1
67 
7
0 69 24 78 58 62 64 

�������

YES
NO

*/

#include<stdio.h>

int main(){
	int odd,even,n,num;
	
	while(scanf("%d",&n)!=EOF){
		odd=0;
		even=0;
		while(n--){
			scanf("%d",&num);
			if(num%2==0)
				even++;
			else
				odd++;
		}
		if(odd>even)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}

