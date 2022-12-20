#include <stdio.h>
int main(){
    int array[5];
    while (1) {
        int judge=0;
        for(int i=0;i<5;i++){
            scanf(" %d", &array[i]);
            judge+=array[i];
        }
        if(judge==0)break;
        for(int i=0;i<5-1;i++){
            for(int j=0;j<5-i-1;j++){
                if(array[j+1]>array[j]){
                    int tmp=array[j];
                    array[j]=array[j+1];
                    array[j+1]=tmp;
                }
            }
        }
        printf("%d\n", array[2]);
    }
    return 0;
}
