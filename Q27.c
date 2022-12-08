#include <stdio.h>
int main(){
    int ans,a[4];
    scanf("%d", &ans);
    int tmp=ans;
    for(int i=0;i<4;i++){
        a[i]=tmp%10;
        tmp/=10;
    }
    int in;
    scanf("%d", &in);
    while(in!=0){
        if(in==ans)printf("4A0B\n");
        else{
            int A=0,B=0,I[4];
            int temp=in;
            for(int i=0;i<4;i++){
                I[i]=temp%10;
                temp/=10;
            }
            for(int i=0;i<4;i++){
                if(a[i]==I[i])A++;
            }
            for(int i=0;i<4;i++){
                for(int j=0;j<4;j++){
                    if(I[i]==a[j])B++;
                }
            }
            B=B-A;
            printf("%dA%dB\n", A,B);
        }
        scanf("%d", &in);
    }
    return 0;
}
