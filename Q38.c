#include <stdio.h>

int main() {
    int input;
    scanf("%d", &input);
    if(input<=120){
        printf("Summer months:%.2f\n", input*2.1);
        printf("Non-Summer months:%.2f\n", input*2.1);
        return 0;
    }
    else{
        float sum1, sum2;
        sum1=sum2=120*2.1;
        input=input-120;
        if(input>=1 && input<=210){
            sum1+=input*3.02;
            printf("Summer months:%.2f\n", sum1);
            sum2+=input*2.68;
            printf("Non-Summer months:%.2f\n", sum2);
            return 0;
        }
        else{
            sum1+=210*3.02;
            sum2+=210*2.68;
            input=input-210;
            if(input>=1&&input<=170){
                sum1+=input*4.39;
                printf("Summer months:%.2f\n", sum1);
                sum2+=input*3.61;
                printf("Non-Summer months:%.2f\n", sum2);
                return 0;
            }
            else{
                sum1+=170*4.39;
                sum2+=170*3.61;
                input=input-170;
                if(input>=1&&input<=200){
                    sum1+=input*4.97;
                    printf("Summer months:%.2f\n", sum1);
                    sum2+=input*4.01;
                    printf("Non-Summer months:%.2f\n", sum2);
                    return 0;
                }
                else{
                    sum1+=200*4.97;
                    sum2+=200*4.01;
                    input=input-200;
                    sum1+=input*5.63;
                    printf("Summer months:%.2f\n", sum1);
                    sum2+=input*4.5;
                    printf("Non-Summer months:%.2f\n", sum2);
                }
            }
        }
    }
    return 0;
}
