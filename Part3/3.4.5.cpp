/*
日期先后
给定两个日期DAY1和DAY2，判断DAY1是否在DAY2之前
*/

#include<cstdio>

int main(){
    int day1[3];
    int day2[3];
    scanf("%d-%d-%d %d-%d-%d",&day1[0],&day1[1],&day1[2],
        &day2[0],&day2[1],&day2[2]);
    if(day1[0]<day2[0]) printf("YES");
    else if(day1[0]>day2[0]) printf("NO");
    else{
        if(day1[1]<day2[1]) printf("YES");
        else if(day1[1]>day2[1]) printf("NO");
        else{
            if(day1[2]<day2[2]) printf("YES");
            else printf("NO");
        }
    }
}
