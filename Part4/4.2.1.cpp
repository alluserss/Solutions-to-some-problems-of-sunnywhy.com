/*
给定个n正整数，按从小到大的顺序输出每个整数的出现次数
第一行一个正整数n（1<=n<=1000）
第二行为用空格隔开的个n正整数（每个正整数的大小均不超过100
*/

#include<cstdio>
int count[1000]={0};
int main(){ 
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;++i){
        int tmp;
        scanf("%d",&tmp);
        count[tmp]++;
    }
    for(int i=0;i<1000;++i)
        if(count[i]!=0)
            printf("%d %d\n",i,count[i]);
    return 0; 
}
