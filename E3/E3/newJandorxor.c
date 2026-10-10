#include<stdio.h>
int cnt1[34],cnt0[34];
int main(){
    int n,i,k,x;
    scanf("%d",&n);
    for(i = 0; i < n; i ++){
        scanf("%d",&x);
        for(k=31; k>=0; k --){
            if(((x>>k)&1)==1)cnt1[k]++;
            else cnt0[k]++;
        }
    }
    long long sa=0,so=0,sx=0;
    int j;
    for(j = 31; j >= 0; j --){
        sa+=((long long)cnt1[j]*(cnt1[j]-1))/2*(1LL<<j);
        so+=(1LL*n*(n-1)/2-(long long)(cnt0[j])*(cnt0[j]-1)/2)*(1LL<<j);
        sx+=(long long)cnt0[j]*cnt1[j]*(1LL<<j);
    }
    printf("%lld %lld %lld\n",sa,so,sx);
    return 0;
}