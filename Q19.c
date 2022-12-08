#include <stdio.h>
int main(){
    int n,s,d;
    scanf("%d", &n);
    int array[n][2];
    int time[25]={0};
    for(int i=0;i<n;i++){
        scanf("%d %d", &s, &d);
        for(int j=s;j<d;j++){
            time[j]++;
        }
    }
    int max=0;
    for(int i=0;i<25;i++){
        if(time[i]>max)max=time[i];
    }
    printf("%d\n", max);
    return 0;
}
