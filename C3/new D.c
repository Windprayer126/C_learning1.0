#include <stdio.h>

int main(){
    int n, ai, i, j;
    long long harm, last;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&ai);
        harm=0;
        last=0;
        for(j=0;j<ai;j++){
            long long x;
            scanf("%lld",&x);
            if(x>0){
                last=x;
                harm+=x;
            }
            else{
                harm+=last;
            }
        }
        printf("%lld\n",harm);
    }
    return 0;
}