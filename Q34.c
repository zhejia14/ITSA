#include <stdio.h>

int main() {
    float height, sex;
    while (scanf("%f %f", &height, &sex)!=EOF) {
        if(sex==1){
            float standard;
            standard=(height-80)*0.7;
            printf("%.1f\n", standard);
        }
        else{
            float standard;
            standard=(height-70)*0.6;
            printf("%.1f\n", standard);
        }
    }
    return 0;
}
