/*锤子剪刀布 (20)
题目描述
大家应该都会玩“锤子剪刀布”的游戏：两人同时给出手势，胜负规则如图所示：
现给出两人的交锋记录，请统计双方的胜、平、负次数，并且给出双方分别出什么手势的胜算最大。

输入
输入第1行给出正整数N（<=105），即双方交锋的次数。随后N行，每行给出一次交锋的信息，即甲、乙双方同时给出的的手势。C代表“锤子”、J代表“剪刀”、B代表“布”，第1个字母代表甲方，第2个代表乙方，中间有1个空格。
输出
输出第1、2行分别给出甲、乙的胜、平、负次数，数字间以1个空格分隔。第3行给出两个字母，分别代表甲、乙获胜次数最多的手势，中间有1个空格。如果解不唯一，则输出按字母序最小的解。
样例输入

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

样例输出

5 3 2
2 3 5
B B
*/

/*
思路：按照字母序设置数组保存每个手势赢得次数。
max和count由于是甲乙公用的，所以用过一次之后需要置零处理，否侧可能出现错误。 
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
