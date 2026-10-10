#include<stdio.h>
int main(){
    int T,i;
    scanf("%d",&T);
    for(i=0;i<T;i++){
        int count=0,j;
        unsigned int x;
        scanf("%u",&x);
        for(j = 0 ;j <= 15 ; j ++){
            if(((x>>j)&1)==((x>>(31-j))&1))count++;
        }
        if(count==16)printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}