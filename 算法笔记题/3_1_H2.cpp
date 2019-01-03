#include<stdio.h>

int main(){
	long a,b,pa,pb;
	int da,db;
	
	while(scanf("%ld%d%ld%d",&a,&da,&b,&db)!=EOF){
		pa=0;
		pb=0;
		while(a){
			if(a%10==da)
				pa=pa*10+da;
			a/=10;
		}
		while(b){
			if(b%10==db)
				pb=pb*10+db;
			b/=10;
		}	
		printf("%d\n",pa+pb);
	}
	return 0;
}
