#include <stdio.h>
int main(){
    char g;
    int num,a,o,p,f=0,t=0;
    scanf("%d%c%d%c%d%c%d", &num, &g,&a,&g,&o,&g,&p);
    int price=a*15+o*20+p*30;
    if(price>num){
        printf("0\n");
        return  0;
    }
    else{
        num=num-price;
        if(num>=50){
            f=num/50;
            num=num%50;
        }
        if(num>=5){
            t=num/5;
            num=num%5;
        }
        printf("%d,%d,%d\n", num,t,f);
    }
    return  0;
}
