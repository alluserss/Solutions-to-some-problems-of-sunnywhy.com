/*
周几
给定一个日期DAY，求它是周几。
*/

//偷懒采用了基姆拉尔森计算公式
#include<cstdio>

int main(){
    int day1[3];
    scanf("%d-%d-%d",&day1[0],&day1[1],&day1[2]);
    if(day1[1]==1||day1[1]==2){
        day1[1]+=12;
        day1[0]--;
    }
    int w=(day1[2]+2*day1[1]+3*(day1[1]+1)/5+day1[0]+day1[0]/4-
    day1[0]/100+day1[0]/400+1)%7;
    printf("%d",w);
}
