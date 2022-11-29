#include <stdio.h>
#include <string.h>
int main() {
    char in[10];
    for(int i=0;i<10;i++)scanf("%c", &in[i]);
    for(int i=1;i<10;i++)in[i]=in[i]-48;
    int table[26][2];
    table[0][0]=65;table[0][1]=10;//A
    table[1][0]=66;table[1][1]=11;//B
    table[2][0]=67;table[2][1]=12;//C
    table[3][0]=68;table[3][1]=13;//D
    table[4][0]=69;table[4][1]=14;//E
    table[5][0]=70;table[5][1]=15;//F
    table[6][0]=71;table[6][1]=16;//G
    table[7][0]=72;table[7][1]=17;//H
    table[8][0]=73;table[8][1]=34;//I
    table[9][0]=74;table[9][1]=18;//J
    table[10][0]=75;table[10][1]=19;//K
    table[11][0]=76;table[11][1]=20;//L
    table[12][0]=77;table[12][1]=21;//M
    table[13][0]=78;table[13][1]=22;//N
    table[14][0]=79;table[14][1]=35;//O
    table[15][0]=80;table[15][1]=23;//P
    table[16][0]=81;table[16][1]=24;//Q
    table[17][0]=82;table[17][1]=25;//R
    table[18][0]=83;table[18][1]=26;//S
    table[19][0]=84;table[19][1]=27;//T
    table[20][0]=85;table[20][1]=28;//U
    table[21][0]=86;table[21][1]=29;//V
    table[22][0]=87;table[22][1]=32;//W
    table[23][0]=88;table[23][1]=30;//X
    table[24][0]=89;table[24][1]=31;//Y
    table[25][0]=90;table[25][1]=33;//Z
    int p,x1,x2,temp=0;
    for(int i=0;i<26;i++)
        if(((int)in[0])==table[i][0])temp=table[i][1];
    x1=temp/10;
    x2=temp%10;
    p=x1+(9*x2)+(8*(int)in[1])+(7*(int)in[2])+(6*(int)in[3])+(5*(int)in[4])+(4*(int)in[5])+(3*(int)in[6])+(2*(int)in[7])+(int)in[8]+(int)in[9];
    if(p%10==0)printf("CORRECT!!!\n");
    else printf("WRONG!!!\n");
    return 0;
}
