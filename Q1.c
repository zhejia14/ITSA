//LED數字顯示
#include <stdio.h>
#include <string.h>
char out[5][23];
void print(char in, int i, int j){//根據數字圖形將陣列中應出現＊地方填入
    if(in=='1'){
        out[i][j+4]='*';
        out[i+1][j+4]='*';
        out[i+2][j+4]='*';
        out[i+3][j+4]='*';
        out[i+4][j+4]='*';
    }
    if(in=='2'){
        for(int k=0;k<5;k++){
            out[i][j+k]='*';
            out[i+2][j+k]='*';
            out[i+4][j+k]='*';
        }
        out[i+1][j+4]='*';
        out[i+3][j]='*';
    }
    if(in=='3'){
        for(int k=0;k<5;k++){
            out[i][j+k]='*';
            out[i+2][j+k]='*';
            out[i+4][j+k]='*';
        }
        out[i+1][j+4]='*';
        out[i+3][j+4]='*';
    }
    if(in=='4'){
        out[i][j]='*';
        out[i][j+4]='*';
        out[i+1][j]='*';
        out[i+1][j+4]='*';
        for(int k=0;k<5;k++)out[i+2][j+k]='*';
        out[i+3][j+4]='*';
        out[i+4][j+4]='*';
    }
    if(in=='5'){
        for(int k=0;k<5;k++){
            out[i][j+k]='*';
            out[i+2][j+k]='*';
            out[i+4][j+k]='*';
        }
        out[i+1][j]='*';
        out[i+3][j+4]='*';
    }
    if(in=='6'){
        for(int k=0;k<5;k++){
            out[i][j+k]='*';
            out[i+2][j+k]='*';
            out[i+4][j+k]='*';
        }
        out[i+1][j]='*';
        out[i+3][j]='*';
        out[i+3][j+4]='*';
    }
    if(in=='7'){
        for(int k=0;k<5;k++)out[i][j+k]='*';
        out[i+1][j+4]='*';
        out[i+2][j+4]='*';
        out[i+3][j+4]='*';
        out[i+4][j+4]='*';
    }
    if(in=='8'){
        for(int k=0;k<5;k++){
            out[i][j+k]='*';
            out[i+2][j+k]='*';
            out[i+4][j+k]='*';
        }
        out[i+1][j]='*';
        out[i+1][j+4]='*';
        out[i+3][j]='*';
        out[i+3][j+4]='*';
    }
    if(in=='9'){
        for(int k=0;k<5;k++){
            out[i][j+k]='*';
            out[i+2][j+k]='*';
        }
        out[i+1][j]='*';
        out[i+1][j+4]='*';
        out[i+3][j+4]='*';
        out[i+4][j+4]='*';
    }
    if(in=='0'){
        for(int k=0;k<5;k++){
            out[i][j+k]='*';
            out[i+4][j+k]='*';
        }
        out[i+1][j]='*';
        out[i+1][j+4]='*';
        out[i+2][j]='*';
        out[i+2][j+4]='*';
        out[i+3][j]='*';
        out[i+3][j+4]='*';
    }
}
int main() {
    char in;
    memset(out, ' ', sizeof(out));
    for(int i=0;i<4;i++){//輸入四位數字，並且填入起始圖形的座標
        scanf("%c", &in);
        if(i==0)print(in, 0, 0);//起始圖形的座標0,0
        if(i==1)print(in, 0, 6);//起始圖形的座標0,6
        if(i==2)print(in, 0, 12);//起始圖形的座標0,12
        if(i==3)print(in, 0, 18);//起始圖形的座標0,18
    }
    for(int i=0;i<5;i++){//輸出陣列即顯示圖形
        for(int j=0;j<23;j++){
            printf("%c", out[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
