/*
给定个n考生的分数，将它们从高到低排序，然后输出每个分数对应的排名
注：
排名 = 不低于当前分数的考生个数
分数相同时排名相同
*/

#include<cstdio>
#include<algorithm>
using namespace std;
int scores[1000];
bool cmp(int a, int b){
    return a>b;
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;++i)
        scanf("%d",&scores[i]);
    sort(scores,scores+n,cmp);
    int samescores=1;
    for(int i=0;i<n;++i){
        if(i+1<n && scores[i]==scores[i+1]){
            samescores++;
        }
        else{
            for(int j=0;j<samescores;++j)
                printf("%d %d\n",scores[i],i+1);
            samescores=1;
        }
    }
}
