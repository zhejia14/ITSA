#include <stdio.h>
#include <stdlib.h>
double SQRT(double num){
    double start=0,end=num;
    double mid, answer=0;
    while (start<=end) {
        mid=(start+end)/2;
        
        if(mid*mid==num){
            answer=mid;
            break;
        }
        if(mid*mid<num){
            answer=start;
            start=mid+1;
        }
        else end=mid-1;
    }
    
    double increment=0.1;
    for(int i=0;i<8;i++){
        while (answer*answer<=num) {
            answer+=increment;
        }
        answer=answer-increment;
        increment=increment/10;
    }
    return  answer;
}
double dis(double x, double y){
    x=x*x;
    y=y*y;
    double dis=x+y;
    dis=SQRT(dis);
    return dis;
}
int main(){
    double range=100;
    double x,y;
    while(scanf("%lf %lf", &x, &y)!=EOF){
        if(dis(x,y)>range)printf("outside\n");
        else printf("inside\n");
    }
}
