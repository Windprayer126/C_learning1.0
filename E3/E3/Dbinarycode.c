#include<stdio.h>
int main(){
    int T,i,j,k,x,p,q,z;
    scanf("%d",&T);
    for(i = 0;i < T; i++){
        scanf("%d",&x);
        if(x>=0){
            for(j=0;j<3;j++){
                for(k=31;k>=0;k--){
                printf("%d",(x>>k)&1);
                }
                printf("\n");
            }
        }
        else{
            int ans=-x;
            printf("1");
            for(p=30 ;p>=0; p--){
                printf("%d",(ans>>p)&1);
            }
            printf("\n");
            printf("1");
            for(q=30 ; q >= 0; q--){
                printf("%d",((ans>>q)&1)^1);
            }
            printf("\n");
            for(z =31; z >= 0; z --){
                printf("%d",(x>>z)&1);
            }
            printf("\n");
        }
    }
    return 0;
}