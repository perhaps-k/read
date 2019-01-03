#include<stdio.h>
#include<string.h>

int main(){
	int pa,pb,alen,blen,i;
	char a[10]={0},b[10]={0};
	char da,db;
	
	while(scanf("%s %c%s %c",a,&da,b,&db)!=EOF){
		pa=0;
		pb=0;
		alen=strlen(a);
		blen=strlen(b);
	
		for(i=0;i<alen;i++){
			if(a[i]==da)
				pa=pa*10+((int)da-48);
		}
		for(i=0;i<blen;i++){
			if(b[i]==db)
				pb=pb*10+((int)db-48);
		}
		printf("%d\n",pa+pb);	
	}
	return 0;
}
