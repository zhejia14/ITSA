#include <stdio.h>
unsigned long function(unsigned long m, unsigned long n,unsigned long ans){
    ans*=m;
    if(n==1) return ans;
    if(m==1) return ans;
    if(m==0) return 0;
    else return function(m, n-1,ans);
}
int main(){
    unsigned long m,n;
    while(scanf("%lu %lu", &m, &n)!=EOF){
        unsigned long ans=function(m, n,1);
        printf("%lu\n", ans);
    }
    return 0;
}
