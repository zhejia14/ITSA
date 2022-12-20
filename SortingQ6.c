#include <stdio.h>
typedef struct student{
    int id;
    int math;
    int english;
}student;
int main(){
    int num;
    scanf("%d", &num);
    student array[num];
    for(int i=0;i<num;i++){
        scanf(" %d %d %d", &array[i].id, &array[i].math, &array[i].english);
    }
     
    for(int i=0;i<num-1;i++){
        for(int j=0;j<num-i-1;j++){
            if(array[j+1].english>array[j].english){
                student tmp=array[j];
                array[j]=array[j+1];
                array[j+1]=tmp;
            }
        }
    }
    for(int i=0;i<num-1;i++){
        for(int j=0;j<num-i-1;j++){
            if(array[j+1].math>array[j].math){
                student tmp=array[j];
                array[j]=array[j+1];
                array[j+1]=tmp;
            }
        }
    }
    for(int i=0;i<num;i++){
        printf("%d %d %d\n", array[i].id, array[i].math, array[i].english);
    }
    return 0;
}
