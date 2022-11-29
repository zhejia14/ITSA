#include <stdio.h>

int main() {
    int input;
    double output;
    while(scanf("%d", &input)!=EOF){
        output=input*1.6;
        printf("%.1lf\n", output);
    }
    return 0;
}
