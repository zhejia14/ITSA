#include <stdio.h>
int main(){
    int in;
    int array[100];
    while (scanf("%d", &in)!=EOF) {//input 數字直到EOF
        int counter=0;
        int judge=0;
        while(in>0){//將數字分解成各個數字並存入陣列
            array[counter]=in%10;
            in=in/10;
            counter++;
        }
        for(int i=0,j=counter-1;i<counter;i++,j--){//i從頭 j從尾判斷是否相等
            if(array[i]!=array[j]){//若有不相等就跳出並顯示ＮＯ
                printf("NO\n");
                judge=1;
                break;
            }
        }
        if(judge==0)printf("YES\n");//當不相等沒有發生時代表全部相等顯示YES
    }
    return 0;
}

//判斷是否迴文
