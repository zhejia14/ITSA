#include <stdio.h>
int main(){
    int m,d;
    scanf(" %d%d", &m, &d);
    if(m==1 && d>=21){printf("Aquarius\n");return 0;}
    if(m==2 && d<=18){printf("Aquarius\n");return 0;}
    if(m==2 && d>=19){printf("Pisces\n");return 0;}
    if(m==3 && d<=20){printf("Pisces\n");return 0;}
    if(m==3 && d>=21){printf("Aries\n");return 0;}
    if(m==4 && d<=20){printf("Aries\n");return 0;}
    if(m==4 && d>=21){printf("Taurus\n");return 0;}
    if(m==5 && d<=21){printf("Taurus\n");return 0;}
    if(m==5 && d>=22){printf("Gemini\n");return 0;}
    if(m==6 && d<=21){printf("Gemini\n");return 0;}
    if(m==6 && d>=22){printf("Cancer\n");return 0;}
    if(m==7 && d<=22){printf("Cancer\n");return 0;}
    if(m==7 && d>=23){printf("Leo\n");return 0;}
    if(m==8 && d<=23){printf("Leo\n");return 0;}
    if(m==8 && d>=24){printf("Virgo\n");return 0;}
    if(m==9 && d<=23){printf("Virgo\n");return 0;}
    if(m==9 && d>=24){printf("Libra\n");return 0;}
    if(m==10 && d<=23){printf("Libra\n");return 0;}
    if(m==10 && d>=24){printf("Scorpio\n");return 0;}
    if(m==11 && d<=22){printf("Scorpio\n");return 0;}
    if(m==11 && d>=23){printf("Sagittarius\n");return 0;}
    if(m==12 && d<=21){printf("Sagittarius\n");return 0;}
    if(m==12 && d>=22){printf("Capricorn\n");return 0;}
    if(m==1 && d<=20){printf("Capricorn\n");return 0;}
    return 0;
}
//星座查詢
