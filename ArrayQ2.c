#include <stdio.h>
int main(){
    int array[6];
    for(int i=0;i<6;i++)scanf("%d", &array[i]);
    for(int i=5;i>=0;i--){
        if(i!=0)printf("%d ", array[i]);
        else printf("%d\n", array[i]);
    }
    return 0;
}
