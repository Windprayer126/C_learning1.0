#include <stdio.h>
int G[35];
int main(){
    int T,i,a,b,c,j,x,y,z,k,cnt;
    unsigned int Y;
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%d %d %d",&a,&b,&c);
        for(j=0;j<32;j++){
            G[j]=0;
        }
        for(j=31;j>=0;j--){
            x=(a>>j)&1;
            y=(b>>j)&1;
            z=(c>>j)&1;
            if(z==0&&(x==1||y==1)){
                G[j]=1;
            }
            else{
                G[j]=0;
            }
        }
        Y=0;
        for(k=31;k>=0;k--){
            Y|=(G[k]<<k);
        }
        cnt=0;
        for(k=0;k<32;k++){
            if((Y>>k)&1) cnt++;
        }
        printf("%u %d\n",Y,cnt);
    }
    return 0;
}