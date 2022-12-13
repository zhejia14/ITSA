#include <string.h>
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    char g=getchar();
    char str[40];
    for(int k=0;k<n;k++){
        fgets(str, sizeof(str), stdin);
        int sum=0;
        for (int i=0; i<strlen(str); i++) {
            if((int)str[i]>=32 && (int)str[i]<127)sum+=(int)str[i];
        }
        printf("%d\n", sum);
    }
    return 0;
}
