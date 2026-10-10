#include<stdio.h>
int b[20005];
int main(){
    int n,i,x,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        long long harm=0;
        scanf("%d",&x);
        for(j=0;j<x;j++){
            scanf("%d",&b[j]);
            if(b[j]!=0)harm+=b[j];
            else{
                if(j>=1)harm+=b[j-1];
                else{
                    harm+=0;
                }
            }
        }
        printf("%lld\n",harm);
    }
    return 0;
}