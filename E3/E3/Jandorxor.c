#include<stdio.h>
int a[100005];
int main(){
    int n,i;
    scanf("%d",&n);
    for(i = 0; i < n; i ++){
        scanf("%d",&a[i]);
    }
    long long sa=0,so=0,sx=0;
    int j,k;
    for(j = 0;j < n; j ++){
        for(k = j+1;k < n; k ++){
            sa+=(a[j]&a[k]);
            so+=(a[j]|a[k]);
            sx+=(a[j]^a[k]);
        }
    }
    printf("%lld %lld %lld",sa,so,sx);
    return 0;
}