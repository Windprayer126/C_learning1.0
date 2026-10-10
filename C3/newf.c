#include <stdio.h>
#include <string.h>
char a[30], s[100005];
int main(){
    int op, i, j;
    fgets(a, sizeof(a), stdin);
    scanf("%d", &op);
    getchar();
    fgets(s, sizeof(s), stdin);
    for(i=0; s[i]!='\0' && s[i]!='\n'; i++){
        if(s[i]>='a' && s[i]<='z'){
            if(op==0){
                s[i]=a[s[i]-'a'];
            }
            else{
                for(j=0; j<26; j++){
                    if(a[j]==s[i]){
                        s[i]='a'+j;
                        break;
                    }
                }
            }
        }
        else if(s[i]>='A' && s[i]<='Z'){
            if(op==0){
                s[i]='A'+a[s[i]-'A']-'a';
            }
            else{
                for(j=0; j<26; j++){
                    if(a[j]==s[i]-'A'+'a'){
                        s[i]='A'+j;
                        break;
                    }
                }
            }
        }
    }
    printf("%s", s);
    return 0;
}