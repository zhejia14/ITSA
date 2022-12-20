#include <stdio.h>

int main(){
    int counter=0;
    char in;
    while(scanf("%c", &in)!=EOF){
        if(in=='1')printf("1");
        else if (in=='0')counter++;
        else if (in=='\n'){
            for(int i=0;i<counter;i++)printf("0");
            printf("\n");
            counter=0;
        }
    }
    return 0;
}
