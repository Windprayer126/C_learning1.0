#include<stdio.h>
int main(){
    int T,x,i,j;
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%d",&x);
        for(j=31;j>=0;j--){
        printf("%d",(x>>j)&1);
    }
        printf("\n");
    }
    return 0;
}
