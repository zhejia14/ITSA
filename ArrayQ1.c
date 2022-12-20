#include <stdio.h>
int main(){
    int array[101];
    int c=0;
    while(1){
        scanf("%d", &array[c]);
        c++;
        char g=getchar();
        if(g=='\n'){
            for(int i=c-1;i>=0;i--){
                if(i!=0)printf("%d ", array[i]);
                else printf("%d\n", array[i]);
            }
            c=0;
        }
        if(g==EOF)break;
    }
    return 0;
}
