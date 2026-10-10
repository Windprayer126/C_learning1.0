#include<stdio.h>
int main(){
    int T,i;
    scanf("%d",&T);
    for(i=0 ;i<T; i++){
        long long v,t,d ,vt;
        scanf("%lld%lld%lld%lld",&v,&t,&d,&vt);
        long long chase=(v-vt) * t;
        if(chase >= d)printf("Hit\n");
        else printf ("Miss\n") ;
    }
    return 0;
}