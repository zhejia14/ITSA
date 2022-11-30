#include <stdio.h>
int gcd(int a,int b)
{
    if(b>a)return gcd(b,a);
    if(b==0)return a;
    return gcd(b, a%b);
}
int main()
{   int a,b,answer;
    scanf("%d %d", &a,&b);
    answer=gcd(a,b);
    printf("%d\n", answer);
    return 0;
}
