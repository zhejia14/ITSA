#include <stdio.h>
typedef struct mark{
    int num;
    int sum;
}mark;
int main(){
    int n;
    scanf("%d", &n);
    mark array[n];
    for(int i=0;i<n;i++){
        array[i].sum=0;
        scanf("%d", &array[i].num);
        int tmp=array[i].num;
        while (tmp!=0) {
            array[i].sum+=tmp%10;
            tmp/=10;
        }
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(array[j+1].num<array[j].num){
                mark tmp=array[j];
                array[j]=array[j+1];
                array[j+1]=tmp;
            }
        }
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(array[j+1].sum<array[j].sum){
                mark tmp=array[j];
                array[j]=array[j+1];
                array[j+1]=tmp;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(i!=n-1)printf("%d ", array[i].num);
        else printf("%d\n", array[i].num);
    }
    return 0;
}
