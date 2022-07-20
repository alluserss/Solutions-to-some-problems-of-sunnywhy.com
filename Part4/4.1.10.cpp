/*
计算排名
给定n个考生的分数，将它们从高到低排序，然后输出每个分数对应的排名
注：
排名 = 高于当前分数的考生个数 + 1
分数相同时排名相同
*/

#include<iostream>
#include<algorithm>
using namespace std;
int scores[1000];
bool cmp(int a, int b){
    return a>b;
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;++i) cin>>scores[i];
    int rank=0;
    sort(scores,scores+n,cmp);
    for(int i=0;i<n;++i){
        if(i==0 || scores[i]<scores[i-1]){
            rank=i+1;
        }
        cout<<scores[i]<<' '<<rank<<endl;
    }
}
