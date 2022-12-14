#include <stdio.h>
int fun(int n){
    if(n==0 || n==1)return n+1;
    else return fun(n-1)+fun(n/2);
}
int main(){
    int in;
    scanf("%d", &in);
    in=fun(in);
    printf("%d\n", in);
}

//根據公式寫出遞迴程式
