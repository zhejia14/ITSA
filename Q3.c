#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double dis(double x, double y){//計算input座標到原點的直線距離
    x=x*x;
    y=y*y;
    double dis=x+y;
    dis=sqrt(dis);
    return dis;
}
int main(){
    double range=100;
    double x,y;
    while(scanf("%lf %lf", &x, &y)!=EOF){
        if(dis(x,y)>range)printf("outside\n");//當距離大於半徑表示在圓外
        else printf("inside\n");//否則在圓內
    }
}
