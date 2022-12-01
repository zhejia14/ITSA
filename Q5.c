#include <stdio.h>
int main(){
    int in;
    while (scanf("%d", &in)!=EOF) {
        if(in==0)printf("00000000\n");
        if(in>0){
            int array[8];
            for(int i=0;i<8;i++){
                array[i]=in%2;
                in=in/2;
            }
            for(int i=7;i>=0;i--)printf("%d", array[i]);
            printf("\n");
        }
        if(in<0){
            int array[8];
            in=-(in);
            for(int i=0;i<8;i++){
                if(in%2==0)array[i]=1;
                else array[i]=0;
                in=in/2;
            }
            array[0]=array[0]+1;
            int tmp=0;
            while(array[tmp]==2){
                array[tmp]=0;
                array[tmp+1]=array[tmp]+1;
                tmp++;
            }
            for(int i=7;i>=0;i--)printf("%d", array[i]);
            printf("\n");
        }
    }
    return  0;
}
