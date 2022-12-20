#include <stdio.h>

int main(){
    int array[7]={1, 6, 9, 23, 56, 95, 0};
    int in;
    scanf("%d", &in);
    array[6]=in;
    for(int i=0;i<7-1;i++){
        for(int j=0;j<7-i-1;j++){
            if(array[j+1]<array[j]){
                int tmp=array[j];
                array[j]=array[j+1];
                array[j+1]=tmp;
            }
        }
    }
    for(int i=0;i<7;i++){
        if(i!=6)printf("%d,", array[i]);
        else printf("%d\n", array[i]);
    }
    return 0;
}
