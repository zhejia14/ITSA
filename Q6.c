#include <stdio.h>

int main() {
    int in;
    while (scanf("%d", &in)!=EOF) {
        if(in>=3&&in<=5)printf("Spring\n");
        else if (in>=6&&in<=8)printf("Summer\n");
        else if (in>=9&&in<=11)printf("Autumn\n");
        else if (in==2||in==1||in==12)printf("Winter\n");
    }
    return 0;
}
