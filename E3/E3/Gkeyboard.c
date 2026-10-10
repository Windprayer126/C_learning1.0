#include<stdio.h>
#include<stdbool.h>
int board[1005];
bool check(int board[],int n,int player){
   for(int i = 0; i + 4 < n; i++){
    if(board[i]==player&&
    board[i+1]==player&&
    board[i+2]==player&&
    board[i+3]==player&&
    board[i+4]==player){
        return true;
    }
   }
   return false;
}
int main(){
    int n,i,j;
    scanf("%d",&n);
    for(i = 0; i < n; i ++){
        scanf("%d",&board[i]);
    }
    for(j = 0; j < n; j ++){
        if(board[j]==0){
            board[j]=2;
            if(check(board,n,2)){
                printf("NO\n");
                return 0;
            }
            board[j]=0;
        }
    }
    int winpoints=0,k;
    for(k = 0; k < n; k ++){
        if(board[k]==0){
            board[k]=1;
            if (check(board , n, 1)){
                winpoints++;
            }
            board[k]=0;
        }
    }
    if (winpoints >= 2){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}