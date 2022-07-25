/*
数塔问题
*/
#include<cstdio>
#include<algorithm>
int num[21][21]={};
int n;
int Func(int i,int j){
    if(i==n) return num[n][j];
    else
        return std::max(Func(i+1,j),Func(i+1,j+1))+num[i][j];
}
int main(){ 
    scanf("%d",&n);
    for(int i=1;i<=n;++i)
        for(int j=1;j<=i;++j)
            scanf("%d",&num[i][j]);
    printf("%d",Func(1,1));
    return 0; 
}
