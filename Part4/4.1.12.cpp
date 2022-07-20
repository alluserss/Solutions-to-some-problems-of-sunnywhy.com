/*
考场排名
给定n个考场中所有考生的姓名、分数，输出这些考生的考场内排名
注：
排名 = 高于当前分数的考生个数 + 1
分数相同时排名相同

第一行一个整数n，表示考场个数
接下来是个n考场的考生信息
对每个考场，第一行为考场内的考生数量k，接下来k行，每行为一个考生的姓名name和分数score（name为仅由大小写字母组成的不超过15个字符的字符串，），
用空格隔开。数据确保全局不会出现相同的姓名。
*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int scores[1000];
struct Student{
    string name;
    int score;
    int rank;
}st[1000];
bool cmp1(Student s1, Student s2){  //先将每个考场的人按分数排序，给rank赋值
    return s1.score>s2.score;
}
bool cmp2(Student s1, Student s2){  //再按字典序排序，输出
    return s1.name<s2.name;
}

int main(){
    int n;
    int num=0;  //记录考生总数
    cin>>n;
    for(int i=0;i<n;++i){
        int k;
        cin>>k;
        for(int j=0;j<k;++j){
            cin>>st[num].name>>st[num].score;
            num++;
        } 
        sort(st+num-k,st+num,cmp1);
        int rank=0;
        for(int j=num-k;j<num;++j){
            if(j==num-k || st[j].score<st[j-1].score){
                rank=j-(num-k)+1;
                st[j].rank=rank;
            }
            else st[j].rank=rank;
        }
    }
    sort(st,st+num,cmp2);
    for(int i=0;i<num;++i){
        cout<<st[i].name<<' '<<st[i].score<<' '<<st[i].rank<<endl;
    }
}
