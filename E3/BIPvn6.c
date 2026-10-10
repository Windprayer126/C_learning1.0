#include<stdio.h>
int main(){
    int T,i;
    scanf("%d",&T);
    for(i=0;i<T;i++){
       unsigned int x,newx;
       unsigned int t,ver,range,label;
       scanf("%u%u",&x,&t);
       ver=(x>>28) & 15;
       range=(x>>20) & 255;
       label=(~(4095<<20))&x;
       newx=((~(255<<20))&x)|(t<<20);
       printf("%u %u %u %u\n",ver,range,label,newx);
    }
    return 0;
}