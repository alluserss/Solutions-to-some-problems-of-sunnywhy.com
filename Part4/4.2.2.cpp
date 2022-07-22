/*
给定一个字符串，按字典序从小到大的顺序输出每个字符的出现次数
输入：一行非空字符串（仅由小写字母组成，长度不超过100）。
输出：输出若干行，每行输出一个字符和它的出现次数，中间用空格隔开
*/

#include<cstdio>
int hashFunc(char c){   //将a-z映射为0-25
    int id=c-'a';
    return id;
}
int hashTable[26]={0};
int main(){ 
    char s[101]={};
    scanf("%s",s);
    int i=0;
    while(s[i]){
        hashTable[hashFunc(s[i])]++;
        i++;
    }
    for(int i=0;i<26;++i){
        if(hashTable[i])
            printf("%c %d\n",'a'+i,hashTable[i]);
    }
    return 0; 
}
