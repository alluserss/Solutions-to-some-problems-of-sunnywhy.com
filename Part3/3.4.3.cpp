/*
日期减法
给定一个日期DAY和一个正整数n，求日期DAY减去n天后的日期
*/

#include<cstdio>
int ym[2][13]={0,31,28,31,30,31,30,31,31,30,31,30,31,
               0,31,29,31,30,31,30,31,31,30,31,30,31};
bool isRun(int year){
    return year%400==0 || (year%4==0&&year%100!=0);
}
int main(){
    int year,month,day,n;
    scanf("%d-%d-%d %d",&year,&month,&day,&n);
    for(int i=1; i<=n; ++i){
        day--;
        int flag=isRun(year)?1:0;
        if(day==0){
            month--;
            day=ym[flag][month];
        }
        if(month==0){
            year--;
            month=12;
            day=ym[flag][12];
        }
    }
    printf("%04d-%02d-%02d",year,month,day);
}
