#include <stdio.h>
int main(){
    int n,sum1,sum2;
    int a1,a2,b1,b2;
    char c;
    scanf("%d", &n);
    while(n>0){
        scanf(" %c%d%d%d%d", &c, &a1, &a2, &b1, &b2);
        if(c=='+'){
            sum1=a1+b1;
            sum2=a2+b2;
            printf("%d %d\n", sum1, sum2);
        }
        else if(c=='-'){
            sum1=a1-b1;
            sum2=a2-b2;
            printf("%d %d\n", sum1, sum2);
        }
        else if(c=='*'){
            sum1=a1*b1-a2*b2;
            sum2=a2*b1+a1*b2;
            printf("%d %d\n", sum1,sum2);
        }
        n=n-1;
    }
    return 0;
}
