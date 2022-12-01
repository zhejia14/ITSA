#include <stdio.h>
int main(){
    long int n,p;
    long double r,sum=0;
    scanf("%Lf %ld %ld", &r, &n, &p);
    for(int i=0;i<n;i++){
        sum=sum+p;
        sum=sum*(1.0+r);
    }
    printf("%lld\n", (long long int)sum);
    return  0;
}
