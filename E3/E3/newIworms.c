#include<stdio.h>
int count[34];
int main(){
    int n,i,x,j;
    scanf("%d",&n);
    for(i = 0; i < n;i ++){
        scanf("%d",&x);
        for(j = 31;j >= 0; j --){
            if(((x>>j)&1)==1){
                count[j]++;
            }
        }
    }
    int ans=0,k;
    for(k = 0;k < 31; k ++){
        if(count[k]%3 != 0){
            ans|=(1<<k);
        }
    }
    if(ans==0)printf("-1\n");
    else printf("%d\n",ans);
    return 0;
}