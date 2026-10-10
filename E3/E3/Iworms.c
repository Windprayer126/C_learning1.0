#include<stdio.h>
int num[10005], rem[10005];
int main(){
    int n, x, x2 = 0, j = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &x);
        if(i != 0 && x == x2){ 
            num[j]++;
        } else {
            j++;
            num[j]++;
            rem[j] = x;
        }
        x2 = x;
    }  
    int ans = -1;
    for(int k = 1; k <= j; k++){
        if(num[k] % 3 == 1){ 
            ans = rem[k];
            break;
        }
    }
    printf("%d\n", ans);
    return 0;
}