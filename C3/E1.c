#include<stdio.h>
#include<math.h>
int G[35];
int main(){
    int T,i,a,b,c,j,x,y,z,k;
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%d%d%d",&a,&b,&c);
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
    unsigned int Y=0;
    for(k=31;k>=0;k--){
        Y|=(G[j]<<k);
    }
    printf("%u\n",Y);
    
    }
    return 0;
}