#include <stdio.h>
void INSERTION(float line[],int num){
    int tmp;
    for(int i=1;i<num;i++){
        int temp=i;
        for(int j=i-1;j>=0;j--){
            if(line[temp]<line[j]){
                tmp=line[j];
                line[j]=line[temp];
                line[temp]=tmp;
                temp=j;
            }
        }
    }
    printf("maximum:%.2f\n", line[9]);
    printf("minimum:%.2f\n", line[0]);
}
int main() {
    float array[10];
    for(int i=0;i<10;i++){
        scanf("%f", &array[i]);
    }
    INSERTION(array, 10);
    return 0;
}
