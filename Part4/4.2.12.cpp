/*
给定一个包含n个正整数的集合s1，再给定一个包含m个正整数的集合s2，求两个集合的差集，即s1-s2
*/

#include<cstdio>
const int Max=20000;
int hashTable[Max]={0};
int main(){ 
    int n,m;
    scanf("%d%d",&n,&m);
    int x;
    for(int i=0;i<n;++i){
        scanf("%d",&x);
        hashTable[x]++;
    }
    for(int i=0;i<m;++i){
        scanf("%d",&x);
        hashTable[x]--;
    }
    bool isFirst=true;      
    for(int i=0;i<Max;++i){
        if(hashTable[i]){
            for(int j=0;j<hashTable[i];++j){
                if(!isFirst) printf(" ");
                isFirst=false;
                printf("%d",i);
            }
        }
    }
    return 0; 
}
