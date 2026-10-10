#include<stdio.h>
long long g[1<<13];
int main(){
    int n,i,s,j,p,mask;
    scanf("%d",&n);
    for(i = 0; i<(1<<n); i ++){
        scanf("%lld",&g[i]);
    }
    for(j=0; j<n; j++){
        for(mask = 0; mask< (1<<n); mask++){
            if(mask&(1<<j)){
                g[mask]+=g[mask^(1<< j)];
            }
        }    
    }
    for(p = 0; p < (1<<n); p ++){
        printf("%lld ",g[p]);
    }
    return 0;
}