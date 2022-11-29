#include <stdio.h>
int Isprime(int num){
    if(num==1)return 0;
    int i=2;
    for(;i*i<=num;i++){
        if(num%i==0)
            return 0;
    }
    return 1;
}
int main(){
    int in;
    while(scanf("%d", &in)!=EOF){
        if(Isprime(in)==0)printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}
