/*
2的幂
给定一个正整数n，求2^n mod 1007
提示：(a*b) mod m = ( (a mod m)*(b mod m) ) mod m
*/
#include<cstdio>

int main(){
    int n;
    scanf("%d",&n);
    int result=1;
    for(int i=0;i<n;++i){
        result=(result*2)%1007;
    }
    printf("%d",result);
}
