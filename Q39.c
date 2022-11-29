#include <stdio.h>
struct grade{
    int listen;
    int read;
    int speak;
    
};
int main() {
    int num;
    scanf("%d", &num);
    struct grade array[num];
    for(int i=0;i<num;i++){
        scanf("%d %d %d", &array[i].listen, &array[i].read, &array[i].speak);
        if(array[i].listen>=60 && array[i].read>=60 && array[i].speak>=60)printf("P\n");
        else if (array[i].listen+array[i].read+array[i].speak>=220&&(array[i].listen<60||array[i].read<60||array[i].speak<60))printf("P\n");
        else if(array[i].listen+array[i].read+array[i].speak<220){
            if(array[i].listen>=60&&array[i].read>=60&&array[i].speak<60)printf("M\n");
            else if(array[i].listen>=60&&array[i].read<60&&array[i].speak>=60)printf("M\n");
            else if (array[i].listen<60&&array[i].read>=60&&array[i].speak>=60)printf("M\n");
            else if (array[i].listen<60&&array[i].read<60&&array[i].speak>=80)printf("M\n");
            else if (array[i].listen<60&&array[i].read>=80&&array[i].speak<60)printf("M\n");
            else if (array[i].listen>=80&&array[i].read<60&&array[i].speak<60)printf("M\n");
            else printf("F\n");
        }
    }
    
    return 0;
}

