/*
画X
绘制一个X（用*号表示线），其中长、宽、对角线的长度（即可容纳的*号个数）均为同一个奇数n。
*/
#include<cstdio>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n/2;++i){
        for(int j=1;j<=i-1;++j) printf(" ");
        printf("*");
        for(int j=1;j<=n-2*i;++j) printf(" ");
        printf("*\n");
    }
    for(int j=1;j<=n/2;++j)printf(" ");
    printf("*\n");
    for(int i=n/2+2;i<=n;++i){
        for(int j=1;j<=n-i;++j) printf(" ");
        printf("*");
        for(int j=1;j<=2*i-n-2;++j) printf(" ");
        printf("*");
        if(i<n) printf("\n");
    }
}
