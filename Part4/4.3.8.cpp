/*
回文字符串
*/
#include<cstdio>
#include<cstring>
char str[101]={};
bool isHui(int i, int j){
    if(i>=j) return true;
    else return str[i]==str[j] && isHui(i+1,j-1);
}
int main(){ 
    scanf("%s",str);
    int len=strlen(str);
    if(isHui(0,len-1)) printf("Yes");
    else printf("No");
    return 0; 
}
