#include <stdio.h>
int main(){
    int array[6];
    long long int sum=0;
    for(int i=0;i<6;i++){
        scanf("%d", &array[i]);
        sum+=array[i]*array[i]*array[i];
    }
    printf("%lld\n", sum);
    return 0;
}
//陣列元素的立方和
