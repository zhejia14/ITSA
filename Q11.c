#include <stdio.h>
int main() {
    int row, col;
    while (scanf("%d %d", &row, &col)!=EOF) {
        int array[row][col];
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                scanf("%d", &array[i][j]);
            }
        }
        for(int i=0;i<col;i++){
            for(int j=0;j<row;j++){
               if(j!=row-1) printf("%d ", array[j][i]);
               else printf("%d", array[j][i]);
            }
            printf("\n");
        }
        
    }
    return 0;
}