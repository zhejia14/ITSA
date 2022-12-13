#include <stdio.h>

int main() {
    int input;
    double output;
    while(scanf("%d", &input)!=EOF){
        output=input*1.6;//1英哩=1.6公里
        printf("%.1lf\n", output);//輸出到小數點後一位
    }
    return 0;
}
