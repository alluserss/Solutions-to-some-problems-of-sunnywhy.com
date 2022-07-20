/*绘制一个空心的等腰直角三角形（使用符号"*"来表示三角形的边，三角形内部用空格填充），
其中直角顶点在左下角，两条直角边的长度均为n（直角边的长度指*的个数）
*/
#include<cstdio>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; ++i){
        if(i==1) printf("*");
        else if(i==n){
            for(int j=1;j<=i;++j) printf("*");
        }
        else{
            printf("*");
            for(int j=1;j<=i-2;++j) printf(" ");
            printf("*");
        }
        if(i!=n) printf("\n");
    }
}
