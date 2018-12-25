#include<stdio.h>
#include<stdlib.h>
 
struct node{
    int id;
    int frontdist;
    int nextdist;
    node* front;
    node* next;
};
 
int main(){
    int n,m,i,distance,node1,node2,leftdist,rightdist;
    struct node* frontnode,*curnode,*headnode;
     
    scanf("%d",&n);//n个出口
    headnode=(struct node*)malloc(sizeof(struct node));//创建头节点 
    headnode->id=1;
    headnode->front=headnode;
    headnode->next=headnode;
    frontnode=headnode;
    for(i=2;i<=n;i++){//创建后续节点 
        curnode=(struct node*)malloc(sizeof(struct node)); //malloc返回类型为void*，需要强制转换    
        curnode->id=i;
        scanf("%d",&distance);
        curnode->frontdist=distance;
        frontnode->nextdist=distance;
        frontnode->next=curnode;
        curnode->next=curnode;
        curnode->front=frontnode;
        frontnode=curnode;
    }
    //把头节点和尾节点连接起来 
    headnode->front=curnode;
    curnode->next=headnode;
    scanf("%d",&distance);
    headnode->frontdist=distance;
    curnode->nextdist=distance;
     
    scanf("%d",&m);
    while(m--){
        scanf("%d%d",&node1,&node2);
        curnode=headnode;
        while(curnode->id!=node1)
            curnode=curnode->next;
        frontnode=curnode;
        leftdist=0;
        rightdist=0;
        while(curnode->id!=node2){
            rightdist+=curnode->nextdist;
            curnode=curnode->next;
        }
        curnode=frontnode;
        while(curnode->id!=node2){
            leftdist+=curnode->frontdist;
            curnode=curnode->front;
        }
        printf("%d\n",leftdist>rightdist?rightdist:leftdist);
    }
     
    //释放节点
    while(n--){
        frontnode=curnode->front;
        free(curnode);
        curnode=frontnode;
    } 
    return 0;
}
