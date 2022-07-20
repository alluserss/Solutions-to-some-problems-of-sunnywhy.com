/*
公共前缀
给定个n字符串，求它们的公共前缀。
*/

#include<cstdio>
#include<cstring>
char str[21][51]={};
int main(){
    int n;
    scanf("%d",&n);
    getchar();
    int min=55; //长度最小的单词
    for(int i=0;i<n;++i){
        scanf("%s",str[i]);
        int len=strlen(str[i]);
        if(len>min) min=len;
    }
    for(int j=0;j<min;++j){
        int flag=1;
        for(int i=1; i<n; ++i){
            if(str[i][j]!=str[0][j]){
                flag=0;
                break;
            }
        }
        if(flag) printf("%c",str[0][j]);
        else break;
    }
    printf("\n");
}
