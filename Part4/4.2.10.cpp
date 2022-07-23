/*
给定一个包含n1个正整数的集合s1，再给定一个包含n2个正整数的集合s2，求两个集合的并集
*/
#include<cstdio>
const int Max=20000;
bool hashTable[Max]={false};
int main(){ 
    int n,m;
    scanf("%d%d",&n,&m);
    int x;
    for(int i=0;i<n;++i){
        scanf("%d",&x);
        hashTable[x]=true;
    }
    for(int i=0;i<m;++i){
        scanf("%d",&x);
        hashTable[x]=true;
    }
    bool isFirst=true;
    for(int i=0;i<Max;++i){
        if(hashTable[i]){
            if(!isFirst) printf(" ");
            isFirst=false;
            printf("%d",i);
        }
    }
    return 0; 
}
